#ifndef CORRELATEDSND_H
#define CORRELATEDSND_H

#include "./statistics.hpp"

class CorrelatedSND : public StandardNormalDistribution{
    
protected:
    double rho;
    const std::vector<double>* uncorr_draws;
    virtual void correlation_calc(std::vector<double>& dist_draws);
    
public:
    CorrelatedSND(const double rho, const std::vector<double>* uncorr_draws);
    virtual ~CorrelatedSND();
    virtual void random_draws(const std::vector<double>& uniform_draws, std::vector<double>& dist_draws);
};


void generate_normal_correlation_paths(double rho, std::vector<double>& spot_normals, std::vector<double>& cor_normals);

#endif
