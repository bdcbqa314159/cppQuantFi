#ifndef FUNCTORS_H
#define FUNCTORS_H

class BinaryFunction{
  
public:
    BinaryFunction(){};
    virtual double operator() (double lhs, double rsh)=0;
};

class Add: public BinaryFunction{
    
public:
    Add(){};
    virtual double operator()(double lhs, double rhs){
        return lhs+rhs;
    }
    
};

class Multiply: public BinaryFunction{
    
public:
    Multiply(){};
    virtual double operator()(double lhs, double rhs){
        return lhs*rhs;
    }
    
};

double binary_op(double lhs, double rhs, BinaryFunction* bin_func){
    
    return (*bin_func)(lhs, rhs);
}


#endif

