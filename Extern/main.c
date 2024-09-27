#include <stdio.h>

#include "b.c"

int main()
{
  printf("global_variable = %d\n", global_variable);

  increment();
  increment();
  increment();

  printf("global_variable = %d\n", global_variable);

  return 0;
}