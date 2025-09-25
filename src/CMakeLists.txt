add_library(cross-language-debugging cross-language-debugging.cpp)
target_include_directories(
  cross-language-debugging
  PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/>
         $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
