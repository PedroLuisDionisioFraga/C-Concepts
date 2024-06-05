# Arrays

## What is an Array?
It's a data structure that stores a collection of elements, each identified by at least one array index or key. An array is stored such that the position of each element can be computed from its index tuple by a mathematical formula. The simplest type of data structure is a linear array, also called one-dimensional array.

## How to Declare an Array?
The C logic also applies to C++.

### In C
```c
int array[5];
int array_predefined_1[5] = {1, 2, 3, 4, 5};  // Initialize the array
int array_predefined_2[] = {1, 2, 3, 4, 5};  // Initialize the array without specifying the size
int partial_array[5] = {1, 2};  // Initialize the first two elements
```

### In C++
You can use the heap and stack memory to declare an array in C++.
```cpp
int array_stack[5];  // Stack
int *array_heap = new int[5];  // Heap

// Never forgot to free the memory
delete[] array_heap;  // Free the memory
```

## Heap vs Stack
In heap allocation, memory is allocated during runtime, allowing use a variable to define a size of array, and it is slower than stack memory, that it is allocated in a contiguous block and deallocated in the reverse order of allocation.
