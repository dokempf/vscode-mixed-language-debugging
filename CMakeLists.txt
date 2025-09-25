cmake_minimum_required(VERSION 3.9)

# Set a name and a version number for your project:
project(
  cross-language-debugging
  VERSION 0.0.1
  LANGUAGES CXX)

# Initialize some default paths
include(GNUInstallDirs)

# Define the minimum C++ standard that is required
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Compilation options
option(BUILD_PYTHON "Enable building of Python bindings" OFF)

# compile the library
add_subdirectory(src)

# compile the application
add_subdirectory(app)

# compile the tests
include(CTest)
if(BUILD_TESTING)
  find_package(Catch2 REQUIRED)
  include(Catch)
  add_subdirectory(tests)
endif()

if(BUILD_PYTHON)
  # Add Python bindings
  find_package(pybind11 REQUIRED)
  # Compile the Pybind11 module
  pybind11_add_module(
    _crosslanguagedebugging
    python/crosslanguagedebugging/_cross-language-debugging.cpp)
  target_link_libraries(_crosslanguagedebugging PUBLIC cross-language-debugging)

  # Install the Python module shared library
  install(TARGETS _crosslanguagedebugging DESTINATION .)
endif()

# Add an alias target for use if this project is included as a subproject in
# another project
add_library(cross-language-debugging::cross-language-debugging ALIAS
            cross-language-debugging)

# Install targets and configuration
install(
  TARGETS cross-language-debugging
  EXPORT cross-language-debugging-config
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})

install(
  EXPORT cross-language-debugging-config
  NAMESPACE cross-language-debugging::
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/cross-language-debugging)

install(DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/include/
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

# This prints a summary of found dependencies
include(FeatureSummary)
feature_summary(WHAT ALL)
