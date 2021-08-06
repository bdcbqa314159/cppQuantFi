#ifndef ASIAN_H
#define ASIAN_H

#include <vector>
#include "./payoff.hpp"

class AsianOption{
protected:
    PayOff* pay_off;
    
public:
    AsianOption(PayOff* pay_off);
    virtual ~AsianOption();
    virtual double pay_off_price(const std::vector<double>& spot_prices) const = 0;
};

class AsianOptionArithmetic : public AsianOption {
    
public:
    AsianOptionArithmetic(PayOff* pay_off);
    virtual ~AsianOptionArithmetic();
    virtual double pay_off_price(const std::vector<double>& spot_prices) const;
};

class AsianOptionGeometric : public AsianOption {
    
public:
    AsianOptionGeometric(PayOff* pay_off);
    virtual ~AsianOptionGeometric();
    
    virtual double pay_off_price(const std::vector<double>& spot_prices) const;
};



#endif
