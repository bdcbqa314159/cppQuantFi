#include "../cpp/include/cppQuantFi_bits/intro.hpp"

#include "../cpp/include/cppQuantFi_bits/vanillaOption.hpp"

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

