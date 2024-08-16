#include <stdio.h>

#include "heap_alloc.h"

int main()
{
  uint8_t size = 10;

  heap_init();

  MemoryBlock_t *ptr1 = (MemoryBlock_t *)heap_alloc(1);

  if (ptr1 != NULL)
    printf("Allocated memory at address %p\n", ptr1);
  else
    printf("Failed to allocate memory\n");

  printf("Enter with %d elements:\n", size);
  for (uint8_t i = 0; i < size; i++)
    scanf("%d", &ptr1->data[i]);

  printf("Elements in the array: \n");
  for (uint8_t i = 0; i < size; i++)
    printf("Element %d: %d\n", i + 1, ptr1->data[i]);

  heap_free(ptr1);

  return 0;
}