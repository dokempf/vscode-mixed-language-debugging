add_executable(tests tests.cpp cross-language-debugging_t.cpp)
target_link_libraries(tests PUBLIC cross-language-debugging Catch2::Catch2)

# allow user to run tests with `make test` or `ctest`
catch_discover_tests(tests)
