#include "structure"

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

void init_structure(py::module &m) {
  py::class_<Structure>(m, "Structure")
      .def(py::init<>())
      .def(py::init<int, int>())
      .def("getData", py::overload_cast<>(&Structure::getData, py::const_));
}