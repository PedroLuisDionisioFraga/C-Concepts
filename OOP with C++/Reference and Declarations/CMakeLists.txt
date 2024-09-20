cmake_minimum_required(VERSION 3.28)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

project(ReferenceAndDeclarations)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/)

add_executable(main main.cpp ${CMAKE_CURRENT_SOURCE_DIR}/lib/a.cpp)
