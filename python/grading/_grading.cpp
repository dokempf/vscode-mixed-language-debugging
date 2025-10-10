#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "grading/grading.hpp"

namespace py = pybind11;

namespace grading {

PYBIND11_MODULE(_grading, m)
{
  m.doc() = "Python Bindings for grading";
  m.def("get_passing_students", &get_passing_students);
}

} // namespace grading
