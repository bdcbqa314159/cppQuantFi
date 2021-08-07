#ifndef BSCALL_H
#define BSCALL_H

class BlackScholesCall{
    
private:
    double S;
    double K;
    double r;
    double T;
    
public:
    BlackScholesCall(double S, double K, double r, double T);
    
    double option_price(double sigma) const;
    double option_vega(double sigma) const;
};

#endif
