cmake_minimum_required(VERSION 2.8)
project(Adapter CXX)

file(GLOB sources
    "src/*.hpp"
    "src/*.cpp"
    "src/Adapters/*.hpp"
)

include_directories("src/" "src/Adapters/")
add_executable(${CMAKE_PROJECT_NAME} ${sources})
set_property(TARGET ${CMAKE_PROJECT_NAME} PROPERTY CXX_STANDARD 14)

add_custom_target(run
    COMMAND ${CMAKE_PROJECT_NAME}
)
