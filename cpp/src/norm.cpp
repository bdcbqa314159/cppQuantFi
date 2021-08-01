#include "../include/cppQuantFi_bits/norm.hpp"

double N(double x){
    
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
        return 1.0-N(-x);
}
