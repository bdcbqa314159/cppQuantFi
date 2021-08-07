#include "../include/cppQuantFi_bits/bsCall.hpp"
#include "../include/cppQuantFi_bits/eurOptionBSMC.hpp"

BlackScholesCall::BlackScholesCall(double S, double K, double r, double T): S(S), K(K), r(r), T(T){
    
}

double BlackScholesCall::option_price(double sigma) const{
    return call_price(S, K, r, sigma, T);
}

double BlackScholesCall::option_vega(double sigma) const{
    
    return call_vega(S, K, r, sigma, T);
}
