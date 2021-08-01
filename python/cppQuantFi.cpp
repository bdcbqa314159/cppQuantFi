#include <pybind11/pybind11.h>

namespace py = pybind11;

void init_say(py::module &);

namespace cppqf {

PYBIND11_MODULE(cppQuantFi, m) {
    // Optional docstring
    m.doc() = "Workouts based on the book C++ for quantitative finance by Michael L. Halls-Moore";

    init_say(m);

	}

}
