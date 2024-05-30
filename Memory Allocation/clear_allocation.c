#include <stdio.h>
#include <stdlib.h>

int main()
{
  int offset = 10;
  // Allocate memory for 5 integers using calloc
  int *ptr = (int *)calloc(offset, sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory allocation failed.\n");
    return 1;
  }

  // Print the values of the allocated memory
  for (int i = 0; i < 5; i++)
    printf("%d ", ptr[i]); // This will print 0 for each element

  // Free the allocated memory
  free(ptr);

  return 0;
}