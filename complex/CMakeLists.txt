cmake_minimum_required(VERSION 3.1)

project(Practica12             
    VERSION 1.0
    DESCRIPTION "A simple CMake project for the Fibonacci Sum application"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14) 						
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(runTests
    test/gtest_main.cc
    test/test_print_complex.cc
    test/tes_add.cc
    test/test_sub.cc
    src/complex.h
    src/complexs.cc  
    src/complex.h)

add_executable(complex
    src/complex.cc
    src/complexs.cc  
    src/complex.h)

target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

target_compile_features(runTests PRIVATE cxx_std_14)

target_compile_options(runTests PRIVATE -Wall -Wextra -Wpedantic)