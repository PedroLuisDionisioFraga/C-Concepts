# Any Concepts about C and C++

This repository contains various examples and exercises related to the C programming language.

## Table of Contents

- [Any Concepts about C and C++](#any-concepts-about-c-and-c)
  - [Table of Contents](#table-of-contents)
  - [Particular Comments](#particular-comments)
    - [Memory Allocation](#memory-allocation)
  - [Note](#note)

## Particular Comments

### Memory Allocation
 * Advantages of malloc() in C Programming 
Dynamic memory allocation helps easily use large data where memory requirement arises at any time. 
The malloc() facilitates resizing the memory at any time in the program. 
The pointer ptr points to the first element, making it similar to an array. 
 * Disadvantages of malloc() in C Programming 
malloc() is not useful for embedded systems. 
While using the malloc() function for dynamic memory allocation, you have to remember the defined size or memory space. 
malloc() function could be more efficient. 

| **Memory Allocation Type** | **Allocation Time** | **Memory Location** | **Size Flexibility** | **Memory Size** | **Representation** |
|:------------------------:|:-----------------:|:-----------------:|:------------------:|:-------------:|:----------------:|
| **Static Memory Allocation** | Compile time | Stack | Fixed, pre-defined by the compiler | Fixed | Array |
| **Dynamic Memory Allocation** | Run time | Heap | Can be changed as needed | Defined by user at run time | Pointer |



## Note

Please note that some of the C code in this repository uses features that are specific to the C99 standard, so a C99-compatible compiler is required.