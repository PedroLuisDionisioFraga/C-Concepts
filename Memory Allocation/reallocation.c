#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//#define ALL_ALLOCATED_MEMORY

int main()
{
  size_t size = sizeof(uint16_t);
  int offset = 2;

  uint16_t *ptr = (uint16_t *)malloc(offset * size);
  if (ptr == NULL)
  {
    printf("Memory allocation failed.\n");
    return 1;
  }

  printf("Positions allocated:\n");
  for (int i = 0; i < offset * size; i++)
    printf("%d ", ptr + i);
  printf("\n");

  printf("Enter with %d elements:\n", (offset * size));
  for (int i = 0; i < offset * size; i++)
    scanf("%d", ptr + i);

  printf("Elements in the array: \n");
  for (int i = 0; i < offset * size; i++)
    printf("Element %d: %d\n", i + 1, *(ptr + i));
  
  printf("\n");

  printf("Address of ptr: %p\n", ptr);
  printf("Content of ptr: %p\n", *ptr);
  printf("Size of ptr: %zu bytes\n", sizeof(ptr));
  printf("Value of `ptr`: %d\n", *ptr);
  printf("Value of `ptr + 1`: %d\n", *(ptr + 1));
  printf("Value of the last element:%d\n", *(ptr + (offset * size) - 1));
  printf("Value of the element after last position: %d\n", *(ptr + (offset * size)));
  printf("Value out the range of the allocated memory: %d\n\n", *(ptr + (offset * size) + 1));

  printf("Reallocating memory....\n");
  int new_offset = 3;
  ptr = (uint16_t *)realloc(ptr, new_offset * size);
  if (ptr == NULL)
  {
    printf("Memory reallocation failed.\n");
    return 1;
  }

  printf("Memories allocated\n");
#ifdef ALL_ALLOCATED_MEMORY
  for (int i = (offset * size); i < ((offset * size) + (new_offset * size)); i++)
    printf("%d ", *(ptr + i));
  printf("\n");

  printf("Enter with %d elements:\n", (new_offset * size));
  for (int i = (offset * size); i < ((offset * size) + (new_offset * size)); i++)
    scanf("%d", ptr + i);

  printf("Elements in the new array: \n");
  for (int i = 0; i < ((offset * size) + (new_offset * size)); i++)
    printf("Element %d: %d\n", i + 1, *(ptr + i));

  printf("\n");

  printf("Address of ptr: %p\n", ptr);
  printf("Content of ptr: %p\n", *ptr);
  printf("Size of ptr: %zu bytes\n", sizeof(ptr));
  printf("Value of `ptr`: %d\n", *ptr);
  printf("Value of `ptr + 1`: %d\n", *(ptr + 1));
  printf("Value of the element in last position: %d\n", *(ptr + (offset * size) + (new_offset * size)));
  printf("Value out the range of the allocated memory: %d\n", *(ptr + ((offset * size) + (new_offset * size)) + 1));
#else
  for (int i = 0; i < new_offset * size; i++)
    printf("%d ", ptr + i);
  printf("\n");

  printf("Enter with %d elements:\n", (new_offset * size));
  for (int i = 0; i < new_offset * size; i++)
    scanf("%d", ptr + i);

  printf("Elements in the new array: \n");
  for (int i = 0; i < new_offset * size; i++)
    printf("Element %d: %d\n", i + 1, *(ptr + i));

  printf("\n");

  printf("Address of ptr: %p\n", ptr);
  printf("Content of ptr: %p\n", *ptr);
  printf("Size of ptr: %zu bytes\n", sizeof(ptr));
  printf("Value of `ptr`: %d\n", *ptr);
  printf("Value of `ptr + 1`: %d\n", *(ptr + 1));
  printf("Value of the element in last position: %d\n", *(ptr + (new_offset * size)));
  printf("Value out the range of the allocated memory: %d\n", *(ptr + (new_offset * size)) + 1);
#endif
  // Free the allocated memory
  free(ptr);

  return 0;
}