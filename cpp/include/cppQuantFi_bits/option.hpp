#ifndef OPTION_H
#define OPTION_H

#include "./payoff.hpp"

class Option{
public:
    PayOff* pay_off;
    double K;
    double r;
    double T;
    
    Option(double K, double r, double T, PayOff* pay_off);
    
    virtual ~Option();
};


#endif
