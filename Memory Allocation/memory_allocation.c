/**
 * @file memory_allocation.c
 * @author Pedro Luis Dionísio Fraga (pedrodfraga@hotmail.com)
 * @brief Dynamic memory allocation in C using malloc() and difference between array usage
 * @version 0.1
 * @date 2024-05-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define USE_MALLOC

int main()
{
  // Size of the block of memory in bytes, in this case, 4 bytes
  size_t size = sizeof(int);

#ifdef USE_MALLOC
  // Will be marks the base address of the block of memory
  int *ptr = NULL;
  // Dynamically allocate memory using malloc()
  ptr = (int *)malloc(size);

  if (ptr == NULL)
  {
    printf("Memory not allocated.\n");
    exit(0);
  }
  
  printf("Enter with %d elements:\n", size);
  for (uint8_t i = 0; i < size; ++i)
    scanf("%d", ptr + i);
#else
  int ptr[4];
  printf("Enter with %d elements:\n", size);
  for (uint8_t i = 0; i < size; ++i)
    scanf("%d", &ptr[i]);
#endif

  printf("Memory allocated successfully using malloc.\n");

  printf("Elements in the array: \n");
  for (uint8_t i = 0; i < size; ++i)
    printf("Element %d: %d\n", i + 1, *(ptr + i));

  printf("Address of ptr: %p\n", ptr);
  printf("Size of ptr: %zu bytes\n", sizeof(ptr));
  printf("Value of `ptr`: %d\n", *ptr);
  printf("Value of `ptr + 1`: %d\n", *(ptr + 1));
  printf("Value out the range of the allocated memory: %d\n", *(ptr + size + 1));

#ifdef USE_MALLOC
  free(ptr);
#endif

  printf("Memory freed successfully.\n");

  return 0;
}
