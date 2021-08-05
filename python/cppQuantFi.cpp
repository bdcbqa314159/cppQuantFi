#include <pybind11/pybind11.h>

namespace py = pybind11;

void init_say(py::module &);
void init_vanilla_option(py::module &);
void init_matrix(py::module &);
void init_call_price(py::module &);
void init_put_price(py::module &);
void init_monte_carlo_call_price(py::module &);
void init_monte_carlo_put_price(py::module &);

namespace cppqf {

PYBIND11_MODULE(cppQuantFi, m) {
    // Optional docstring
    m.doc() = "Workouts based on the book C++ for quantitative finance by Michael L. Halls-Moore";

    init_say(m);
    init_vanilla_option(m);
    init_matrix(m);
    init_call_price(m);
    init_put_price(m);
    init_monte_carlo_call_price(m);
    init_monte_carlo_put_price(m);

	}

}
