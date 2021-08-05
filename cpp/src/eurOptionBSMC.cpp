#include "../include/cppQuantFi_bits/eurOptionBSMC.hpp"

double d_j(const int &j, const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return (log(S/K) + (r+(pow(-1, j-1))*0.5*v*v)*T)/(v*(pow(T,0.5)));
}


double call_price(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return S*N(d_j(1,S,K,r,v,T))-K*exp(-r*T)*N(d_j(2,S,K,r,v,T));
}

double put_price(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return -S*N(-d_j(1,S,K,r,v,T))+K*exp(-r*T)*N(-d_j(2,S,K,r,v,T));
}

double monte_carlo_call_price(const int &num_sims, const double &S, const double &K, const double &r, const double &v, const double &T){
    
    double S_adjust = S*exp(T*(r-0.5*v*v));
    double S_cur = 0;
    
    double pay_off_sum = 0;
    
    for (int i=0; i<num_sims; i++){
        
        double gauss_bm = gaussian_box_muller();
        S_cur = S_adjust*exp(sqrt(v*v*T)*gauss_bm);
        pay_off_sum += std::max(S_cur-K,0.0);
    }
    
    return pay_off_sum/static_cast<double>(num_sims)*exp(-r*T);
}

//Very bad practice -> violation of DRY principle but who cares here :)

double monte_carlo_put_price(const int &num_sims, const double &S, const double &K, const double &r, const double &v, const double &T){
    
    double S_adjust = S*exp(T*(r-0.5*v*v));
    double S_cur = 0;
    
    double pay_off_sum = 0;
    
    for (int i=0; i<num_sims; i++){
        
        double gauss_bm = gaussian_box_muller();
        S_cur = S_adjust*exp(sqrt(v*v*T)*gauss_bm);
        pay_off_sum += std::max(K-S_cur,0.0);
    }
    
    return pay_off_sum/static_cast<double>(num_sims)*exp(-r*T);
}
