#ifndef VANILLAOPTION_H
#define VANILLAOPTION_H

class VanillaOption{
private:
    
    void init();
    void copy(const VanillaOption& rhs);
    
    double K;
    double r;
    double T;
    double S;
    double sigma;
    
public:
    
    VanillaOption();
    VanillaOption(const double& K, const double& r, const double& T, const double& S, const double& sigma);
    VanillaOption(const VanillaOption& rhs);
    VanillaOption& operator=(const VanillaOption& rhs);
    
    virtual ~VanillaOption();
    
    double getK() const;
    double getr() const;
    double getT() const;
    double getS() const;
    double getsigma() const;
    
    double calc_call_price() const;
    double calc_put_price() const;
};




#endif

