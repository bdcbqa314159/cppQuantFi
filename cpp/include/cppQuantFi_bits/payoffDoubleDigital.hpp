#ifndef PAYOFFDOUBLEDIGITAL_H
#define PAYOFFDOUBLEDIGITAL_H

#include "./payoff.hpp"

class PayOffDoubleDigital: public PayOff {

private:
    double U;
    double D;
    
public:
    PayOffDoubleDigital(const double& U, const double& D);
    virtual ~ PayOffDoubleDigital();
    virtual double operator() (const double& S) const;
};

#endif
