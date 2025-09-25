#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "cross-language-debugging/cross-language-debugging.hpp"

namespace py = pybind11;

namespace crosslanguagedebugging {

PYBIND11_MODULE(_crosslanguagedebugging, m)
{
  m.doc() = "Python Bindings for cross-language-debugging";
  m.def("add_one", &add_one, "Increments an integer value");
}

} // namespace crosslanguagedebugging
