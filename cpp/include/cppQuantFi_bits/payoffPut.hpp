#ifndef PAYOFFPUT_H
#define PAYOFFPUT_H

#include "./payoff.hpp"

class PayOffPut: public PayOff {

private:
    double K;
    
public:
    PayOffPut(const double& K);
    virtual ~ PayOffPut();
    virtual double operator() (const double& S) const;
};

#endif
