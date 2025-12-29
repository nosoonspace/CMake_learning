cmake_minimum_required(VERSION 3.20.0)
project(CMake_learning)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CMake_learning planning_main.cpp process.cpp pnc_map.cpp)
target_include_directories(CMake_learning PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(CMake_learning PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)   