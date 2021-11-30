cmake_minimum_required(VERSION 3.20)
project(longest_substring_without_repeating_characters)

set(CMAKE_CXX_STANDARD 17)

add_executable(longest_substring_without_repeating_characters main.cpp solution.h solution.cpp)

enable_testing()
add_subdirectory(googletest)
add_executable(test_solution test_solution.cpp solution.h solution.cpp)
target_link_libraries(test_solution gtest_main)