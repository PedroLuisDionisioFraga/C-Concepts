# Memory Allocation in C
C provides some functions to achieve these tasks. There are 4 library functions defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming.

## Table of Contents
  - [malloc()](#malloc)
  - [calloc()](#calloc)
  - [malloc() vs calloc()](#malloc-vs-calloc)

## malloc(size_of_memory)
- `size_of_memory`: Size of memory in bytes.

Or memory allocation, is used to dynamically allocate, at runtime, a single large block of memory with the specified size, in bytes, and **returns a pointer** of type void which **can be casted into pointer of any form**.

Example:
```c
int16_t *ptr;
uint8_t offset = 4;
// A pointer with appoint to 4 blocks of memory with 2 bytes each
ptr = (int16_t*) malloc(offset * sizeof(int16_t));  // Similar to int16_t ptr[offset * sizeof(int16_t)];
```

**NOTE**: It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially.

## calloc(n_itens, size_of_item)
- `n_itens`: Number of elements to allocate.
- `size_of_item`: Size of each element in bytes.

Or clear allocation, is used to dynamically allocate the specified number of blocks of memory of the specified type. It initializes each block with a default value  `0`.

Example:
```c
int16_t *ptr;
uint8_t offset = 4;
// A pointer with appoint to 4 blocks of memory with 2 bytes each
ptr = (int16_t*) calloc(offset, sizeof(uint16_t));  // Similar to int16_t ptr[sizeof(uint16_t)] = {0, 0, 0, 0};
```

**NOTE**: It initializes memory at execution time so that it has initialized each block with the default garbage value initially.

## malloc() vs calloc()
- `malloc()` doesn’t initialize the memory allocated, while `calloc()` initializes the allocated memory to zero.
- `calloc()` takes more time to allocate memory, while `malloc()` takes less time to allocate memory.
- `calloc()` is similar to `malloc()` plus `memset(pointer, 0, sizeof(pointer))`.

## realloc(void *ptr, size_of_memory)
- `ptr`: Pointer to the previously allocated memory.
- `size_of_memory`: Size of memory in bytes.

Or reallocation, is used to adjust the size of previously allocated memory. It keeps existing data and returns a pointer to the new memory. If there's not enough memory, it fails and returns NULL.

Example:
```c
int16_t *ptr;
uint8_t offset = 4;
uint8_t new_offset = 8;
// A pointer with appoint to 4 blocks of memory with 2 bytes each
ptr = (int16_t*) malloc(offset * sizeof(int16_t));  // Similar to int16_t ptr[offset * sizeof(int16_t)];
// Reallocate memory to 8 blocks of memory with 2 bytes each
ptr = (int16_t*) realloc(ptr, new_offset * sizeof(int16_t));  // Similar to int16_t ptr[new_offset * sizeof(int16_t)];
```

**NOTE**: The new memory blocks are not initialized and may contain garbage values.


## NOTES
> Not create a array using variables to define your size, because it's not a constant value. Use `#define` or `const` to define the size of your array.