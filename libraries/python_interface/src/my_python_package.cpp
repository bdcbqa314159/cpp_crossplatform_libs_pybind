#include <pybind11/pybind11.h>

namespace py = pybind11;

void init_structure(py::module &);

namespace mcl {

PYBIND11_MODULE(my_python_package, m) {
  // Optional docstring
  m.doc() = "my_python_package library";

  init_structure(m);
}
}  // namespace mcl