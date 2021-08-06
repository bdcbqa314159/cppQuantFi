#include "../include/cppQuantFi_bits/pathGeneration.hpp"

void calc_path_spot_prices(std::vector<double>& spot_prices, const double& r, const double& v, const double& T){
    
    
    double dt = T/static_cast<double>(spot_prices.size());
    double drift = exp(dt*(r-0.5*v*v));
    double vol = sqrt(v*v*dt);
    
    for (int i = 1; i<spot_prices.size(); i++){
        double gauss_bm = gaussian_box_muller();
        
        spot_prices.at(i) = spot_prices.at(i-1)*drift*exp(vol*gauss_bm);
    }

}
