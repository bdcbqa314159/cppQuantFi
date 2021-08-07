#ifndef RANDOM_H
#define RANDOM_H

#include <vector>

class RandomNumberGenerator{
    
protected:
    unsigned long init_seed;
    unsigned long cur_seed;
    unsigned long num_draws;
    
public:
    RandomNumberGenerator(unsigned long num_draws, unsigned long init_seed): num_draws(num_draws), init_seed(init_seed), cur_seed(init_seed){};
    
    virtual ~RandomNumberGenerator(){};
    
    virtual unsigned long get_random_seed() const {
        return cur_seed;
    }
    
    virtual void set_random_seed(unsigned long seed) {
        cur_seed = seed;
    }
    
    virtual void reset_random_seed(){
        cur_seed = init_seed;
    }
    
    virtual void set_num_draws(unsigned long num_draws){
        this->num_draws = num_draws;
    }
    
    virtual unsigned long get_random_integer() = 0;
    
    virtual void get_uniform_draws(std::vector<double>& draws) = 0;
};

#endif
