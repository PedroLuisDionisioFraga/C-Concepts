/**
 * @file memory_allocation.c
 * 
 * @brief C provides some functions to achieve these tasks. There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming. They are:
 * * malloc()
 * * calloc()
 * * realloc()
 * * free()
 *
 * The `malloc` function, or memory allocation, is used to dynamically allocate, at runtime, a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially.
 *
 * Example:
 * ```C
 * cast-type *ptr;
 * ptr = (cast-type*) malloc(offset * byte-size);
 * ```
 *
 * The `calloc` function, or contiguous allocation, is used to dynamically allocate the specified number of blocks of memory of the specified type. It initializes each block with a default value `0`.
 *
 * Example:
 * Here, **n** is the no. of elements and **element-size** is the size of each element.
 * ```C
 * cast-type *ptr;
 * ptr = (cast-type*)calloc(n, element-size);
 * ```
 *
 * The `realloc` function, or reallocation, is used to dynamically change the memory allocation of a previously allocated memory. In other words, if the memory previously allocated with the help of malloc or calloc is insufficient, realloc can be used to dynamically re-allocate memory. This function returns a pointer to the newly allocated memory. If the memory is insufficient, allocation fails and returns a NULL pointer.
 * It maintains the already present value and new blocks will be initialized with a garbage value.
 *
 * Example:
 * ```C
 * cast-type *ptr;
 * ptr = realloc(ptr, newSize);
 * ```
 *
 * The `free` function, or deallocation, is used to dynamically de-allocate the memory. The memory allocated using functions malloc, calloc, or realloc is not de-allocated on their own. Hence the free() method is used, whenever the dynamic memory allocation is no longer needed.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
  // Will be marks the base address of the block of memory
  int *ptr = NULL;
  // Dynamically allocate memory using malloc()
  ptr = (int *)malloc(sizeof(int));

  // Dynamically allocate memory using calloc()
  int n_elements = 5;
  // ptr = (int*)calloc(n, sizeof(int));

  if (ptr == NULL)
  {
    printf("Memory not allocated.\n");
    exit(0);
  }
  printf("Enter elements: ");
  for (uint8_t i = 0; i < n_elements; ++i)
  {
    scanf("%d", ptr + i);
  }
  printf("Memory allocated successfully using malloc.\n");

  printf("Elements in the array: \n");
  for (uint8_t i = 0; i < n_elements; ++i)
  {
    printf("Element %d: %d\n", i + 1, *(ptr + i));
  }

  printf("Address of ptr: %p\n", ptr);
  printf("Size of ptr: %zu bytes\n", sizeof(ptr));
  free(ptr);
  printf("Memory freed successfully.\n\n");

  printf("Re-allocating memory using realloc.\n");
  ptr = (int *)realloc(ptr, 2 * sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory not allocated.\n");
    exit(0);
  }
  printf("Memory reallocated successfully using realloc.\n");
  printf("Address of ptr: %p\n", ptr);
  printf("Size of ptr: %zu bytes\n", sizeof(ptr));
  printf("Value of ptr: %d\n", *ptr);

  free(ptr);
  printf("Memory freed successfully.\n");

  return 0;
}
