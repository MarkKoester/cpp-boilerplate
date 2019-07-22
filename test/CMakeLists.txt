enable_testing()

add_executable(lib-test test_main.cpp)
target_link_libraries(lib-test Catch2::Catch2 lib)
add_test(NAME lib-test COMMAND lib-test)
