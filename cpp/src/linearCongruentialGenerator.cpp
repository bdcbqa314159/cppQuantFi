#include "../include/cppQuantFi_bits/linearCongruentialGenerator.hpp"

const unsigned long a = 16807;
const unsigned long m = 2147483647;

const unsigned long q = 127773;
const unsigned long r = 2836;

LinearCongruentialGenerator::LinearCongruentialGenerator(unsigned long num_draws, unsigned long init_seed): RandomNumberGenerator(num_draws, init_seed){
    
    if (init_seed == 0){
        init_seed = 1;
        cur_seed = 1;
    }
    
    max_multiplier = 1./(1. + (m-1));
}

LinearCongruentialGenerator::~LinearCongruentialGenerator(){
    
}

unsigned long LinearCongruentialGenerator::get_random_integer(){
    
    unsigned long k = 0;
    k = cur_seed / q;
    cur_seed = a*(cur_seed- k*q) - r*k;
    
    if (cur_seed<0){
        cur_seed += m;
    }
    
    return cur_seed;
}

void LinearCongruentialGenerator::get_uniform_draws(std::vector<double>& draws){
    
    for (unsigned long i = 0; i<num_draws; i++){
        draws.at(i) = get_random_integer()*max_multiplier;
    }
}

