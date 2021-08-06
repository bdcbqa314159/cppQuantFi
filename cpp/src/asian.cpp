#include "../include/cppQuantFi_bits/asian.hpp"
#include <numeric>
#include <math.h>

AsianOption::AsianOption(PayOff* pay_off):pay_off(pay_off){
    
}

AsianOption::~AsianOption(){
    
}

AsianOptionArithmetic::AsianOptionArithmetic(PayOff* pay_off): AsianOption(pay_off){
    
}

AsianOptionArithmetic::~AsianOptionArithmetic(){
    
}

double AsianOptionArithmetic::pay_off_price(const std::vector<double> &spot_prices) const{
    
    unsigned num_times = spot_prices.size();
    double sum = std::accumulate(spot_prices.begin(), spot_prices.end(), 0);
    
    double arith_mean = sum/static_cast<double>(num_times);
    return (*pay_off)(arith_mean);
}


AsianOptionGeometric::AsianOptionGeometric(PayOff* pay_off):AsianOption(pay_off){
    
}

AsianOptionGeometric::~AsianOptionGeometric(){
    
}


double AsianOptionGeometric::pay_off_price(const std::vector<double> &spot_prices) const{
    
    unsigned num_times = spot_prices.size();
    double log_sum = 0;
    
    for(int i = 0; i<spot_prices.size(); i++){
        log_sum += log(spot_prices.at(i));
    }
    
    double geom_mean = exp(log_sum/ static_cast<double>(num_times));
    return (*pay_off)(geom_mean);
}
