# Welcome to cross-language-debugging

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)


# Prerequisites

Building cross-language-debugging requires the following software installed:

* A C++11-compliant compiler
* CMake `>= 3.9`
* The testing framework [Catch2](https://github.com/catchorg/Catch2) for building the test suite* Python `>= 3.8` for building Python bindings

# Building cross-language-debugging

The following sequence of commands builds cross-language-debugging.
It assumes that your current working directory is the top-level directory
of the freshly cloned repository:

```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```

The build process can be customized with the following CMake variables,
which can be set by adding `-D<var>={ON, OFF}` to the `cmake` call:

* `BUILD_TESTING`: Enable building of the test suite (default: `ON`)
* `BUILD_PYTHON`: Enable building the Python bindings (default: `ON`)


If you wish to build and install the project as a Python project without
having access to C++ build artifacts like libraries and executables, you
can do so using `pip` from the root directory:

```
python -m pip install .
```

# Testing cross-language-debugging

When built according to the above explanation (with `-DBUILD_TESTING=ON`),
the C++ test suite of `cross-language-debugging` can be run using
`ctest` from the build directory:

```
cd build
ctest
```

The Python test suite can be run by first `pip`-installing the Python package
and then running `pytest` from the top-level directory:

```
python -m pip install .
pytest
```

# Documentation

cross-language-debugging *should* provide a documentation.
