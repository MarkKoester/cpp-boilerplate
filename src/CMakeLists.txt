add_executable(app main.cpp)
add_subdirectory(lib)
target_link_libraries(app spdlog lib)
