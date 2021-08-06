#include "../cpp/include/cppQuantFi_bits/intro.hpp"
#include "../cpp/include/cppQuantFi_bits/vanillaOption.hpp"
#include "../cpp/include/cppQuantFi_bits/matrix.hpp"
#include "../cpp/include/cppQuantFi_bits/eurOptionBSMC.hpp"

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/numpy.h>

namespace py = pybind11;

void init_say(py::module &m){

    m.def("say", &say);
    
}

void init_vanilla_option(py::module &m){
    
    py::class_<VanillaOption>(m, "VanillaOption")
            .def(py::init<>())
            .def(py::init<const double& , const double& , const double& ,const double& ,const double& >())
            .def("getK", &VanillaOption::getK)
            .def("getT", &VanillaOption::getT)
            .def("getr", &VanillaOption::getr)
            .def("getS", &VanillaOption::getS)
            .def("getsigma", &VanillaOption::getsigma)
            .def("calc_call_price", &VanillaOption::calc_call_price)
            .def("calc_put_price", &VanillaOption::calc_put_price);
}

void init_matrix(py::module &m){
    
    py::class_<Matrix<double>>(m, "Matrix")
            .def(py::init<>())
            .def(py::init<const int&, const int&, const double&>())
            .def("get_mat", &Matrix<double>::get_mat);
}

void init_call_price(py::module &m){
    
    m.def("call_price", &call_price);
}

void init_put_price(py::module &m){

    m.def("put_price", &put_price);
}

void init_monte_carlo_put_price(py::module &m){

    m.def("monte_carlo_put_price", &monte_carlo_put_price);
}

void init_call_delta(py::module &m){
    
    m.def("call_delta", &call_delta);
}

void init_call_gamma(py::module &m){
    
    m.def("call_gamma", &call_gamma);
}

void init_call_vega(py::module &m){
    
    m.def("call_vega", &call_vega);
}

void init_call_rho(py::module &m){
    
    m.def("call_rho", &call_rho);
}
void init_call_theta(py::module &m){
    
    m.def("call_theta", &call_theta);
}

void init_call_delta_fdm(py::module &m){
    
    m.def("call_delta_fdm", &call_delta_fdm);
}

void init_call_vega_fdm(py::module &m){
    
    m.def("call_vega_fdm", &call_vega_fdm);
}

void init_call_gamma_fdm(py::module &m){
    
    m.def("call_gamma_fdm", &call_gamma_fdm);
}

void init_call_rho_fdm(py::module &m){
    
    m.def("call_rho_fdm", &call_rho_fdm);
}

void init_call_theta_fdm(py::module &m){
    
    m.def("call_theta_fdm", &call_theta_fdm);
}


void init_put_delta(py::module &m){
    
    m.def("put_delta",&put_delta);
}

void init_put_gamma(py::module &m){
    
    m.def("put_gamma",&put_gamma);
}

void init_put_vega(py::module &m){
    
    m.def("put_vega",&put_vega);
}

void init_put_rho(py::module &m){
    
    m.def("put_rho",&put_rho);
}

void init_put_theta(py::module &m){
    
    m.def("put_theta",&put_theta);
}


void init_put_delta_fdm(py::module &m){
    
    m.def("put_delta_fdm",&put_delta_fdm);
}

void init_put_vega_fdm(py::module &m){
    
    m.def("put_vega_fdm", &put_vega_fdm);
}

void init_put_gamma_fdm(py::module &m){
    m.def("put_gamma_fdm",&put_vega_fdm);
}

void init_put_rho_fdm(py::module &m){
    m.def("put_rho_fdm",&put_rho_fdm);
}

void init_put_theta_fdm(py::module &m){
    m.def("put_theta_fdm",&put_theta_fdm);
}


void init_monte_carlo_call_greeks(py::module &m){
    m.def("monte_carlo_call_greeks",&monte_carlo_call_greeks);
}

void init_monte_carlo_call_price(py::module &m){

    m.def("monte_carlo_call_price", py::overload_cast<const int &, const double &, const double &, const double &, const double &, const double &>(&monte_carlo_call_price));

    m.def("monte_carlo_call_price", py::overload_cast<const int &, const double &, const double &, const double &, const double &, const double &, const double &, double &,double &, double &,  double &, double &, double &>(&monte_carlo_call_price));

}
 

