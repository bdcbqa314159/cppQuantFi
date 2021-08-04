#include "../include/cppQuantFi_bits/thomasAlgorithm.hpp"

void thomas_algorithm(const std::vector<double>& a, const std::vector<double>& b, const std::vector<double>& c, const std::vector<double>& d, std::vector<double>& f){
    
    
    size_t N = d.size();
    
    std::vector<double> c_star(N,0);
    std::vector<double> d_star(N,0);
    
    c_star.at(0) = c.at(0)/b.at(0);
    d_star.at(0) = d.at(0)/b.at(0);
    
    for (int i=1; i<N-1; i++){
        
        double m = 1./(b.at(i) - a.at(i) * c_star.at(i-1));
        c_star.at(i) = c.at(i)*m;
        d_star.at(i) = (d.at(i)-a.at(i)*d_star.at(i-1))*m;
    }
    
    for (int i=N-2; i>=0; i--){
        f.at(i) = d_star.at(i)-c_star.at(i)*d.at(i+1);
    }
    
}
