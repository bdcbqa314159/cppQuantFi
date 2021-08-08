#ifndef FDM_H
#define FDM_H

#include "./pde.hpp"
#include <vector>

class FDMBase {
    
protected:
    ConvectionDiffusionPDE* pde;
    double x_dom;
    unsigned long J;
    double dx;
    std::vector<double> x_values;
    
    double t_dom;
    unsigned long N;
    double dt;
    
    double prev_t, cur_t;
    double alpha, beta, gamma;
    std::vector<double> new_result;
    std::vector<double> old_result;
    
    FDMBase(double x_dom, unsigned long J, double t_dom, unsigned long N, ConvectionDiffusionPDE* pde);
    virtual void calculate_step_sizes() = 0;
    virtual void set_initial_conditions() = 0;
    virtual void calculate_boundary_conditions() = 0;
    virtual void calculate_inner_domain() = 0;
    
public:
    virtual void step_march() = 0;
    
};

class FDMEulerExplicit : public FDMBase{
    
protected:
    void calculate_step_sizes();
    void set_initial_conditions();
    void calculate_boundary_conditions();
    void calculate_inner_domain();
    
public:
    FDMEulerExplicit(double x_dom, unsigned long J, double t_dom, unsigned long N, ConvectionDiffusionPDE* pde);
    void step_march();
    
};



#endif
