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

void init_monte_carlo_call_price(py::module &m){

    m.def("monte_carlo_call_price", &monte_carlo_call_price);
}

void init_monte_carlo_put_price(py::module &m){

    m.def("monte_carlo_put_price", &monte_carlo_put_price);
}

