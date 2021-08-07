#ifndef LINEARCONGRUENTIALGENERATOR_H
#define LINEARCONGRUENTIALGENERATOR_H

#include "./random.hpp"

class LinearCongruentialGenerator : public RandomNumberGenerator{
    
private:
    double max_multiplier;
    
public:
    LinearCongruentialGenerator(unsigned long num_draws, unsigned long init_seed = 1);
    
    virtual ~LinearCongruentialGenerator();
    
    virtual unsigned long get_random_integer();
    virtual void get_uniform_draws(std::vector<double>& draws);
};

#endif
