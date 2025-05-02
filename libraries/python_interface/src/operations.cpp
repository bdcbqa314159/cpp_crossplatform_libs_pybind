#include "operations"

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

void init_operation(py::module &m) {
  py::class_<Operation>(m, "Operation")
      .def(py::init<>())
      .def("__call__", &Operation::operator());
}