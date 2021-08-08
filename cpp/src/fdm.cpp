#include "../include/cppQuantFi_bits/fdm.hpp"
#include <fstream>

FDMBase::FDMBase(double x_dom, unsigned long J, double t_dom, unsigned long N, ConvectionDiffusionPDE* pde)
: x_dom(x_dom), J(J), t_dom(t_dom),  N(N), pde(pde){
    
}

FDMEulerExplicit::FDMEulerExplicit(double x_dom, unsigned long J, double t_dom, unsigned long N, ConvectionDiffusionPDE* pde)
: FDMBase(x_dom, J, t_dom, N, pde){
    
    calculate_step_sizes();
    set_initial_conditions();
}

void FDMEulerExplicit::calculate_step_sizes(){
    
    dx = x_dom/static_cast<double>(J-1);
    dt = t_dom/static_cast<double>(N-1);
}

void FDMEulerExplicit::set_initial_conditions(){
    
    double cur_spot = 0.;
    
    old_result.resize(J,0);
    new_result.resize(J,0);
    x_values.resize(J,0);
    
    for (unsigned long j=0; j<J; j++){
        cur_spot = static_cast<double>(j)*dx;
        old_result.at(j) = pde->init_cond(cur_spot);
        x_values.at(j) = cur_spot;
    }
    
    prev_t = 0.;
    cur_t = 0.;
    
}


void FDMEulerExplicit::calculate_boundary_conditions(){
    new_result.at(0) = pde->boundary_left(prev_t, x_values.at(0));
    new_result.at(J-1) = pde->boundary_right(prev_t, x_values.at(J-1));
}

void FDMEulerExplicit::calculate_inner_domain(){
    
    for (unsigned long j = 1; j<J-1; j++){
        
        double dt_sig = dt*(pde->diff_coeff(prev_t, x_values.at(j)));
        double dt_sig_2 = dt*dx*0.5*(pde->conv_coeff(prev_t, x_values.at(j)));
    
    
    alpha = dt_sig - dt_sig_2;
    beta = dx*dx - (2. * dt_sig) + (dt*dx*dx*(pde->zero_coeff(prev_t, x_values.at(j))));
    gamma = dt_sig + dt_sig_2;
    
        new_result.at(j) = ((alpha * old_result.at(j-1)) + (beta*old_result.at(j)) + (gamma*old_result.at(j+1)))/(dx*dx) - (dt*(pde->source_coeff(prev_t, x_values.at(j))));
    }
}

void FDMEulerExplicit::step_march(){
    
    std::ofstream fdm_out("fdm.csv");
    
    while (cur_t < t_dom){
        cur_t = prev_t+dt;
        calculate_boundary_conditions();
        calculate_inner_domain();
        
        for (int j = 0; j<J; j++){
            fdm_out << x_values.at(j) << " "<< prev_t<< " "<<new_result.at(j)<<std::endl;
        }
        old_result = new_result;
        prev_t = cur_t;
    }
    
    fdm_out.close();
}
