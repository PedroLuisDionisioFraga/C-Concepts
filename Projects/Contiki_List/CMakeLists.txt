cmake_minimum_required(VERSION 3.28.1)

project(Contiki_List)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/library/)

add_executable(main main.c ${CMAKE_CURRENT_SOURCE_DIR}/library/list.c)
