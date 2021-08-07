#ifndef NEWTONRAPHSON_H
#define NEWTONRAPHSON_H

#include <math.h>

template <typename T, double (T::*g)(double) const, double (T::*g_prime)(double) const>
double newton_raphson(double y_target, double init, double epsilon, const T& root_func) {
    
    double y = (root_func.*g)(init);
    double x = init;
    
    while(abs(y-y_target)>epsilon){
        double dx = (root_func.*g_prime)(x);
        x += (y_target-y)/dx;
        y = (root_func.*g)(x);
    }
    
    return x;
}


#endif
