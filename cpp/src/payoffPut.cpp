#include "../include/cppQuantFi_bits/payoffPut.hpp"
PayOffPut::PayOffPut(const double K){
    this->K = K;
}

PayOffPut::~PayOffPut(){
    
}

double PayOffPut::operator()(const double S) const{
    return std::max(K-S,0.0);
}
