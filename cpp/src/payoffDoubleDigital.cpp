#include "../include/cppQuantFi_bits/payoffDoubleDigital.hpp"
PayOffDoubleDigital::PayOffDoubleDigital(const double& U, const double& D){
    this->U=U;
    this->D=D;
}

PayOffDoubleDigital::~PayOffDoubleDigital(){
    
}

double PayOffDoubleDigital::operator()(const double& S) const{
    
    if (S>=D && S<=U) return 1.0;
    else return 0.0;
    
}

