cmake_minimum_required(VERSION 2.8)
project(AbstractFactory CXX)

file(GLOB sources
    "src/*.hpp"
    "src/*.cpp"
    "src/Factories/*.hpp"
)

include_directories("src/" "src/Factories/")
add_executable(${CMAKE_PROJECT_NAME} ${sources})
set_property(TARGET ${CMAKE_PROJECT_NAME} PROPERTY CXX_STANDARD 14)

add_custom_target(run
    COMMAND ${CMAKE_PROJECT_NAME}
)
