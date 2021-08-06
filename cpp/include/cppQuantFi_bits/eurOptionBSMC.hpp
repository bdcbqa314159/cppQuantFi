#ifndef EUROPTIONBSMC_H
#define EUROPTIONBSMC_H

#include <algorithm>
#include "./norm.hpp"

double d_j(const int &j, const double &S, const double &K, const double &r, const double &v, const double &T);

double call_price(const double &S, const double &K, const double &r, const double &v, const double &T);


double monte_carlo_call_price(const int &num_sims, const double &S, const double &K, const double &r, const double &v, const double &T);



double call_delta(const double &S, const double &K, const double &r, const double &v, const double &T);

double call_gamma(const double &S, const double &K, const double &r, const double &v, const double &T);

double call_vega(const double &S, const double &K, const double &r, const double &v, const double &T);

double call_rho(const double &S, const double &K, const double &r, const double &v, const double &T);

double call_theta(const double &S, const double &K, const double &r, const double &v, const double &T);

double call_delta_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dS);

double call_vega_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dS);

double call_gamma_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dv);

double call_rho_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dr);

double call_theta_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dT);


double put_price(const double &S, const double &K, const double &r, const double &v, const double &T);

double monte_carlo_put_price(const int &num_sims, const double &S, const double &K, const double &r, const double &v, const double &T);

double put_delta(const double &S, const double &K, const double &r, const double &v, const double &T);

double put_gamma(const double &S, const double &K, const double &r, const double &v, const double &T);

double put_vega(const double &S, const double &K, const double &r, const double &v, const double &T);

double put_rho(const double &S, const double &K, const double &r, const double &v, const double &T);

double put_theta(const double &S, const double &K, const double &r, const double &v, const double &T);


double put_delta_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dS);

double put_vega_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dS);

double put_gamma_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dv);

double put_rho_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dr);

double put_theta_fdm(const double &S, const double &K, const double &r, const double &v, const double &T, const double &dT);


void monte_carlo_call_price(const int &num_sims, const double &S, const double &K, const double &r, const double &v, const double &T, const double &delta, double &Sp,double &S_, double &Sm,  double &Rp, double &Vp, double &Tp);


double monte_carlo_call_price(const int &num_sims, const double &S, const double &K, const double &r, const double &v, const double &T);

void monte_carlo_call_greeks(const double &delta, double &Sp,double &S_, double &Sm,  double &Rp, double &Vp, double &Tp, double &dS, double &ddS, double &dR, double &dV, double &dT);

#endif
