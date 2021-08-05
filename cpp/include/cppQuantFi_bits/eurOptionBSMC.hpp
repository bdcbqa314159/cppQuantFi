#ifndef EUROPTIONBSMC_H
#define EUROPTIONBSMC_H

#include <algorithm>
#include "./norm.hpp"

double d_j(const int &j, const double &S, const double &K, const double &r, const double &v, const double &T);

double call_price(const double &S, const double &K, const double &r, const double &v, const double &T);

double put_price(const double &S, const double &K, const double &r, const double &v, const double &T);

double monte_carlo_call_price(const int &num_sims, const double &S, const double &K, const double &r, const double &v, const double &T);

double monte_carlo_put_price(const int &num_sims, const double &S, const double &K, const double &r, const double &v, const double &T);

#endif
