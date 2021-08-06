#include "../include/cppQuantFi_bits/payoffCall.hpp"

PayOffCall::PayOffCall(const double& K){
    this->K = K;
}

PayOffCall::~PayOffCall(){
    
}

double PayOffCall::operator()(const double& S) const{
    return std::max(S-K,0.0);
}
