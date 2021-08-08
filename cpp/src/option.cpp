#include "../include/cppQuantFi_bits/option.hpp"

Option::Option(double K, double r, double T, PayOff* pay_off)
: K(K), r(r), T(T), pay_off(pay_off){
    
}

Option::~Option(){
    
}


