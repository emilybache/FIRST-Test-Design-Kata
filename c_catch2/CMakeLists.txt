cmake_minimum_required(VERSION 3.16)
set(CMAKE_VERBOSE_MAKEFILE ON)
project(FIRST VERSION 1.0
        DESCRIPTION "FIRST test design kata.")

set(CMAKE_C_STANDARD 99)

enable_testing()
add_subdirectory(src)
add_subdirectory(test-catch2)

