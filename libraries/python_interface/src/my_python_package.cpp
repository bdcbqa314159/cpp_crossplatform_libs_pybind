#include <pybind11/pybind11.h>

namespace py = pybind11;

void init_structure(py::module &);
void init_operation(py::module &);

namespace mcl {

PYBIND11_MODULE(my_python_package, m) {
  // Optional docstring
  m.doc() = "my_python_package library";

  init_structure(m);
  init_operation(m);
}
}  // namespace mcl