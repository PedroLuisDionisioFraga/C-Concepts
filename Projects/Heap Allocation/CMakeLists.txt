cmake_minimum_required(VERSION 3.10)

# Set the project name
project(HeapAllocation)

# Add the executable, is similar to `gcc main.c heap_alloc.c -o main.exe`
add_executable(main main.c heap_alloc.c)
