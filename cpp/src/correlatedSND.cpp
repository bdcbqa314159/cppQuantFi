#include "../include/cppQuantFi_bits/correlatedSND.hpp"
#include <iostream>
#include <math.h>

CorrelatedSND::CorrelatedSND(const double rho, const std::vector<double>* uncorr_draws): rho(rho), uncorr_draws(uncorr_draws){
    
}

CorrelatedSND::~CorrelatedSND(){
    
}

void CorrelatedSND::correlation_calc(std::vector<double> &dist_draws){
    for (int i = 0 ; i<dist_draws.size(); i++){
        dist_draws.at(i) = rho*(*uncorr_draws).at(i) +dist_draws.at(i)*sqrt(1-rho*rho);
    }
}


void CorrelatedSND::random_draws(const std::vector<double> &uniform_draws, std::vector<double> &dist_draws){
    
    if (uniform_draws.size() != dist_draws.size()){
        std::cout<<"Draws vectors are of unequal size."<<std::endl;
        return;
    }
    
    else if (uniform_draws.size()%2 != 0){
        std::cout<<"Uniform draw vector size not an even number"<<std::endl;
        return;
    }
    
    for (int i = 0; i<uniform_draws.size()/2; i++){
        double pi = 3.14159;
        
        dist_draws[2*i] = sqrt(-2.*log(uniform_draws[2*i]))*sin(2*pi*uniform_draws[2*i+1]);
        dist_draws[2*i+1] = sqrt(-2.*log(uniform_draws[2*i]))*cos(2*pi*uniform_draws[2*i+1]);
        
    }
    
    correlation_calc(dist_draws);
    
    return;
}

void generate_normal_correlation_paths(double rho, std::vector<double>& spot_normals, std::vector<double>& cor_normals){
    
    unsigned vals = spot_normals.size();
    
    StandardNormalDistribution snd;
    
    std::vector<double> snd_uniform_draws(vals, 0);
    
    for (int i = 0; i<snd_uniform_draws.size(); i++){
        snd_uniform_draws.at(i) = rand()/static_cast<double>(RAND_MAX);
    }
    
    snd.random_draws(snd_uniform_draws, spot_normals);
    
    CorrelatedSND csnd(rho, &spot_normals);
    std::vector<double> csnd_uniform_draws(vals,0);
    
    for (int i = 0; i<csnd_uniform_draws.size(); i++){
        csnd_uniform_draws.at(i) = rand()/static_cast<double>(RAND_MAX);
    }
    
    csnd.random_draws(csnd_uniform_draws, cor_normals);
}
