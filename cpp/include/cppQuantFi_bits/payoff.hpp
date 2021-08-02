#ifndef PAYOFF_H
#define PAYOFF_H

#include <algorithm>

class PayOff{
    
public:
    PayOff(){};
    virtual ~PayOff(){};
    virtual double operator() (const double S) const = 0;
};

#endif
