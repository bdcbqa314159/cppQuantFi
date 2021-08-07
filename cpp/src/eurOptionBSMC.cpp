#include "../include/cppQuantFi_bits/eurOptionBSMC.hpp"

double d_j(const int &j, const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return (log(S/K) + (r+(pow(-1, j-1))*0.5*v*v)*T)/(v*(pow(T,0.5)));
}


double call_price(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return S*N(d_j(1,S,K,r,v,T))-K*exp(-r*T)*N(d_j(2,S,K,r,v,T));
}

double bs_jd_call_price(const double& S, const double& K, const double& r, const double& sigma, const double& T, const int& N, const double& m, const double& lambda, const double& nu){
    
    
    double price = 0;
    double factorial = 1.;
    
    double lambda_p = lambda*m;
    double lambda_p_T = lambda_p*T;
    
    for (int n=0; n<N; n++){
        double sigma_n = sqrt(sigma*sigma+n*nu*nu/T);
        double r_n = r-lambda*(m-1)+n*log(m)/T;
        
        if (n==0) factorial *=1;
        else factorial*=n;
        
        price += ((exp(-lambda_p_T)*pow(lambda_p_T,n))/factorial)*call_price(S,K,r_n,sigma_n,T);
    }
    
    return price;
}





double call_delta(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return N(d_j(1,S,K,r,v,T));
}

double call_gamma(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return norm_pdf(d_j(1,S,K,r,v,T))/(S*v*sqrt(T));
}

double call_vega(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return S*norm_pdf(d_j(1,S,K,r,v,T))*sqrt(T);
}

double call_theta(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return -(S*norm_pdf(d_j(1,S,K,r,v,T))*v)/(2*sqrt(T)) - r*K*exp(-r*T)*N(d_j(2,S,K,r,v,T));
}

double call_rho(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return K*T*exp(-r*T)*N(d_j(2,S,K,r,v,T));
}

double call_delta_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dS){
    
    return (call_price(S+dS, K, r, v, T) - call_price(S, K, r, v, T))/dS;
}

double call_vega_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dv){
    
    return (call_price(S, K, r, v+dv, T) - call_price(S, K, r, v, T))/dv;
}

double call_gamma_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dS){
    
    return (call_price(S+dS, K, r, v, T) - 2*call_price(S, K, r, v, T) + call_price(S-dS, K, r, v, T))/(dS*dS);
}

double call_rho_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dr){
    
    return (call_price(S, K, r+dr, v, T) - call_price(S, K, r, v, T))/dr;
}

double call_theta_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dT){
    
    return (call_price(S, K, r, v, T+dT) - call_price(S, K, r, v, T))/dT;
}









double put_price(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return -S*N(-d_j(1,S,K,r,v,T))+K*exp(-r*T)*N(-d_j(2,S,K,r,v,T));
}

double put_delta(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return N(d_j(1,S,K,r,v,T)) -1;
}

double put_gamma(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return call_gamma(S,K,r,v,T);
}

double put_vega(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return call_vega(S,K,r,v,T);
}

double put_theta(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return -(S*norm_pdf(d_j(1,S,K,r,v,T))*v)/(2*sqrt(T)) + r*K*exp(-r*T)*N(-d_j(2,S,K,r,v,T));
}

double put_rho(const double &S, const double &K, const double &r, const double &v, const double &T){
    
    return -K*T*exp(-r*T)*N(-d_j(2,S,K,r,v,T));
}


double put_delta_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dS){
    
    return (put_price(S+dS, K, r, v, T) - put_price(S, K, r, v, T))/dS;
}

double put_vega_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dv){
    
    return (put_price(S, K, r, v+dv, T) - put_price(S, K, r, v, T))/dv;
}

double put_gamma_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dS){
    
    return (put_price(S+dS, K, r, v, T) - 2*put_price(S, K, r, v, T) + put_price(S-dS, K, r, v, T))/(dS*dS);
}

double put_rho_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dr){
    
    return (put_price(S, K, r+dr, v, T) - put_price(S, K, r, v, T))/dr;
}

double put_theta_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dT){
    
    return (put_price(S, K, r, v, T+dT) - put_price(S, K, r, v, T))/dT;
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

void monte_carlo_call_price(const int &num_sims, const double &S, const double &K, const double &r, const double &v, const double &T, const double &delta, double &Sp,double &S_, double &Sm,  double &Rp, double &Vp,double &Tp){
    
    
    
    double Sp_adjust =(S+delta)*exp(T*(r-0.5*v*v));
    double Sm_adjust =(S-delta)*exp(T*(r-0.5*v*v));
    double Rp_adjust = S*exp(T*((r+delta)-0.5*v*v));
    double Vp_adjust = S*exp(T*(r-0.5*(v+delta)*(v+delta)));
    double Tp_adjust = S*exp((T+delta)*(r-0.5*v*v));
    double S_adjust = S*exp(T*(r-0.5*v*v));
    
    
    double S_cur = 0;
    double Sp_cur =0;
    double Sm_cur =0;
    double Rp_cur =0;
    double Vp_cur =0;
    double Tp_cur =0;
    
    double pay_off_sum = 0;
    
    double pay_off_sp = 0;
    double pay_off_sm = 0;
    double pay_off_rp = 0;
    double pay_off_vp = 0;
    double pay_off_tp = 0;
    
    
    for (int i=0; i<num_sims; i++){
        
        double gauss_bm = gaussian_box_muller();
        
        double exp_gauss = exp(sqrt(v*v*T)*gauss_bm);
        double exp_gauss_v = exp(sqrt((v+delta)*(v+delta)*T)*gauss_bm);
        double exp_gauss_T = exp(sqrt(v*v*(T+delta))*gauss_bm);
        
        S_cur = S_adjust*exp_gauss;
        
        Sp_cur = Sp_adjust*exp_gauss;
        Sm_cur = Sm_adjust*exp_gauss;
        Rp_cur = Rp_adjust*exp_gauss;
        Vp_cur = Vp_adjust*exp_gauss_v;
        Tp_cur = Tp_adjust*exp_gauss_T;
        
        pay_off_sum += std::max(S_cur-K,0.0);
        pay_off_sp += std::max(Sp_cur-K,0.0);
        pay_off_sm += std::max(Sm_cur-K,0.0);
        pay_off_rp += std::max(Rp_cur-K,0.0);
        pay_off_vp += std::max(Vp_cur-K,0.0);
        pay_off_tp += std::max(Tp_cur-K,0.0);
    }
    
    S_ = pay_off_sum/static_cast<double>(num_sims)*exp(-r*T);
    Sp = pay_off_sp/static_cast<double>(num_sims)*exp(-r*T);
    Sm = pay_off_sm/static_cast<double>(num_sims)*exp(-r*T);
    Rp = pay_off_rp/static_cast<double>(num_sims)*exp(-(r+delta)*T);
    Vp = pay_off_vp/static_cast<double>(num_sims)*exp(-r*T);
    Tp = pay_off_tp/static_cast<double>(num_sims)*exp(-r*(T+delta));
    
}

void monte_carlo_call_greeks(const double &delta, double &Sp,double &S_, double &Sm,  double &Rp, double &Vp, double &Tp, double &dS, double &ddS, double &dR, double &dV, double &dT){
    
    dS = (Sp-S_)/delta;
    ddS = (Sp-2*S_+Sm)/(delta*delta);
    dR = (Rp-S_)/delta;
    dT = (Tp-S_)/delta;
    dV = (Vp-S_)/delta;
}
