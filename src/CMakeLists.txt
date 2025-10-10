add_library(grading grading.cpp)
target_include_directories(
  grading PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/>
                 $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
