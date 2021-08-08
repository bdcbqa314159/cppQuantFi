#include "../include/cppQuantFi_bits/hestonMC.hpp"

HestonEuler::HestonEuler(Option* pOption, double kappa, double theta, double xi, double rho)
: pOption(pOption), kappa(kappa), theta(theta), xi(xi), rho(rho){
    
}

HestonEuler::~HestonEuler(){
    
}

void HestonEuler::calc_vol_path(const std::vector<double> &vol_draws, std::vector<double> &vol_path){
    
    size_t vec_size = vol_draws.size();
    
    double dt = pOption->T/ static_cast<double>(vec_size);
    
    for (int i = 1; i<vec_size; i++){
        double v_max = std::max(vol_path.at(i-1), 0.);
        vol_path.at(i) = vol_path.at(i-1)+kappa*dt*(theta-v_max)+xi*sqrt(v_max*dt)*vol_draws.at(i-1);
    }
}

void HestonEuler::calc_spot_path(const std::vector<double> &spot_draws, const std::vector<double> &vol_path, std::vector<double> &spot_path){
    
    size_t vec_size = spot_draws.size();
    
    double dt = pOption->T/static_cast<double>(vec_size);
    
    for (int i=1; i<vec_size; i++){
        double v_max = std::max(vol_path.at(i-1), 0.);
        spot_path.at(i) = spot_path.at(i-1)*exp((pOption->r - 0.5*v_max)*dt + sqrt(v_max*dt)*spot_draws.at(i-1));
    }
    
}
