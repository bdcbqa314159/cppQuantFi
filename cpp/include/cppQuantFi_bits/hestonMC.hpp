#ifndef HESTONMC_H
#define HESTONMC_H

#include <math.h>
#include <vector>
#include "./option.hpp"

class HestonEuler{
    
private:
    Option* pOption;
    double kappa;
    double theta;
    double xi;
    double rho;
    
public:
    HestonEuler(Option* pOption, double kappa, double theta, double xi, double rho);
    
    virtual ~HestonEuler();
    
    void calc_vol_path(const std::vector<double>& vol_draws, std::vector<double>& vol_path);
    
    void calc_spot_path(const std::vector<double>& spot_draws, const std::vector<double>& vol_path, std::vector<double>& spot_path);
};

#endif
