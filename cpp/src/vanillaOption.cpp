#include "../include/cppQuantFi_bits/vanillaOption.hpp"
#include "../include/cppQuantFi_bits/norm.hpp"

void VanillaOption::init(){
    
    K = 100.0;
    r = 0.05;
    T = 1.0;
    S = 100.0;
    sigma = 0.2;
    
}

void VanillaOption::copy(const VanillaOption& rhs){
    
    K = rhs.getK();
    r = rhs.getr();
    T = rhs.getT();
    S = rhs.getS();
    sigma = rhs.getsigma();
}

VanillaOption::VanillaOption(){
    
    init();
}

VanillaOption::VanillaOption(const double& K, const double& r, const double& T, const double& S, const double& sigma)
: K(K), r(r), T(T), S(S), sigma(sigma){
    
}

VanillaOption::VanillaOption(const VanillaOption& rhs){
    
    copy(rhs);
}

VanillaOption& VanillaOption::operator=(const VanillaOption &rhs){
    
    if (this != & rhs){
        copy(rhs);
    }
    
    return *this;
}

VanillaOption::~VanillaOption(){
    
}

double VanillaOption::getK() const{
    
    return K;
}

double VanillaOption::getr() const{
    
    return r;
}

double VanillaOption::getT() const{
    
    return T;
}

double VanillaOption::getS() const{
    
    return S;
}

double VanillaOption::getsigma() const{
    
    return sigma;
}

double VanillaOption::calc_call_price() const{
    
    double sigma_sqrt_T = sigma*sqrt(T);
    double d_1 = (log(S/K) + (r+sigma*sigma*0.5)*T)/sigma_sqrt_T;
    double d_2 = d_1-sigma_sqrt_T;
    
    return S*N(d_1)-K*exp(-r*T)*N(d_2);
}

double VanillaOption::calc_put_price() const{
    
    double sigma_sqrt_T = sigma*sqrt(T);
    double d_1 = (log(S/K) + (r+sigma*sigma*0.5)*T)/sigma_sqrt_T;
    double d_2 = d_1-sigma_sqrt_T;
    
    return -S*N(-d_1)+K*exp(-r*T)*N(-d_2);
}




