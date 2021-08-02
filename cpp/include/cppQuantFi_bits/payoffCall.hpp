#ifndef PAYOFFCALL_H
#define PAYOFFCALL_H

#include "./payoff.hpp"

class PayOffCall: public PayOff {

private:
    double K;
    
public:
    PayOffCall(const double K);
    virtual ~ PayOffCall();
    virtual double operator() (const double S) const;
};

#endif
