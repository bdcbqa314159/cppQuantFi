#ifndef INTERVALBISECTION_H
#define INTERVALBISECTION_H

#include <math.h>

template <typename T, double (T::*g)(double) const>
double interval_bisection(double y_target, double m, double n, double epsilon, const T& root_func) {
    
    double x = 0.5*(m+n);
    
    double y = (root_func.*g)(x);
    
    do {
        if (y<y_target) m=x;
        
        else if (y>y_target) n=x;
        
        x = 0.5*(m+n);
        y = (root_func.*g)(x);;
        
    }while(abs(y-y_target)>epsilon);
    
    return x;
}


#endif

