cmake_minimum_required(VERSION 3.0)
project(BadCalculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z")

set(SOURCE_FILES main.cpp Integer.cpp Complex.cpp StringToNumberConverterFactory.cpp)
add_executable(BadCalculator ${SOURCE_FILES})
