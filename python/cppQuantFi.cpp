#include <pybind11/pybind11.h>

namespace py = pybind11;

void init_say(py::module &);
void init_vanilla_option(py::module &);
void init_matrix(py::module &);
void init_call_price(py::module &);
void init_put_price(py::module &);

void init_monte_carlo_put_price(py::module &);

void init_call_delta(py::module &);

void init_call_gamma(py::module &);

void init_call_vega(py::module &);

void init_call_rho(py::module &);
void init_call_theta(py::module &);

void init_call_delta_fdm(py::module &);

void init_call_vega_fdm(py::module &);

void init_call_gamma_fdm(py::module &);

void init_call_rho_fdm(py::module &);

void init_call_theta_fdm(py::module &);

void init_put_delta(py::module &);

void init_put_gamma(py::module &);

void init_put_vega(py::module &);

void init_put_rho(py::module &);

void init_put_theta(py::module &);

void init_put_delta_fdm(py::module &);

void init_put_vega_fdm(py::module &);

void init_put_gamma_fdm(py::module &);

void init_put_rho_fdm(py::module &);

void init_put_theta_fdm(py::module &);

void init_monte_carlo_call_price(py::module &);
void init_monte_carlo_call_greeks(py::module &);

namespace cppqf {

PYBIND11_MODULE(cppQuantFi, m) {
    // Optional docstring
    m.doc() = "Workouts based on the book C++ for quantitative finance by Michael L. Halls-Moore";

    init_say(m);
    init_vanilla_option(m);
    init_matrix(m);
    init_call_price(m);
    init_put_price(m);
    
    init_monte_carlo_put_price(m);
    
    init_call_delta(m);
    init_call_gamma(m);
    init_call_vega(m);
    init_call_rho(m);
    init_call_theta(m);
    init_call_delta_fdm(m);
    init_call_vega_fdm(m);
    init_call_gamma_fdm(m);
    init_call_rho_fdm(m);
    init_call_theta_fdm(m);
    init_put_price(m);
    init_monte_carlo_put_price(m);
    init_put_delta(m);
    init_put_gamma(m);
    init_put_vega(m);
    init_put_rho(m);
    init_put_theta(m);
    init_put_delta_fdm(m);
    init_put_vega_fdm(m);
    init_put_gamma_fdm(m);
    init_put_rho_fdm(m);
    init_put_theta_fdm(m);
    init_monte_carlo_call_price(m);
    init_monte_carlo_call_greeks(m);

	}

}
