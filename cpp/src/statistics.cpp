#include "../include/cppQuantFi_bits/statistics.hpp"
#include <iostream>

StatisticalDistribution::StatisticalDistribution(){
    
}

StatisticalDistribution::~StatisticalDistribution(){
    
}

StandardNormalDistribution::StandardNormalDistribution(){
    
}

StandardNormalDistribution::~StandardNormalDistribution(){
    
}

double StandardNormalDistribution::pdf(const double& x) const{
    double pi = 3.14159;
    return (1./(pow(2*pi, 0.5)))*exp(-0.5*x*x);
}

double StandardNormalDistribution::cdf(const double& x) const{
    
    double gamma = 0.2316419 ;
    double a1 = 0.319381530;
    double a2 = -0.356563782;
    double a3 = 1.781477937;
    double a4 = -1.821255978;
    double a5 = 1.330274429;
    double pi = 3.14159;
    double k = 1.0/(1.0+gamma*x);
    
    if(x >= 0.0){
        
        return 1-((((a5*k+a4)*k+a3)*k+a2)*k+a1)*k*exp(-x*x/2.0)/sqrt(2.0*pi);
    }
    
    else
        return 1.0-cdf(-x);
    
}

double StandardNormalDistribution::inv_cdf(const double& quantile) const {
    
    static double a[4] = {2.50662823884 , -18.61500062529, 41.39119773534 , -25.44106049637};
    
    static double b[4] = {-8.47351093090 , 23.08336743743, -21.06224101826 , 3.13082909833};
    
    static double c[9] = {0.3374754822726147 , 0.9761690190917186 , 0.1607979714918209 , 0.0276438810333863 , 0.0038405729373609 , 0.0003951896511919 , 0.0000321767881768 , 0.0000002888167364 , 0.0000003960315187};
    
    if (quantile >= 0.5 && quantile <= 0.92){
        
        double num = 0;
        double denom = 1.;
        
        for (int i = 0; i<4; i++){
            
            num += a[i]*pow((quantile-0.5), 2*i+1);
            denom += b[i]*pow((quantile-0.5), 2*i);
        }
        
        return num/denom;
    }
    
    else if (quantile >0.92 && quantile <1){
        double num = 0;
        
        for (int i = 0; i<9; i++){
            num += c[i]*pow((log(-log(1-quantile))), i);
        }
        
        return num;
    }
    
    else{
        return -1.*inv_cdf(1-quantile);
    }
}

double StandardNormalDistribution::mean() const {return 0.;}

double StandardNormalDistribution::var() const {return 1.;}

double StandardNormalDistribution::stdev() const {return 1.;}

void StandardNormalDistribution::random_draws(const std::vector<double> &uniform_draws, std::vector<double> &dist_draws){
    
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
    
    return;
    
}
