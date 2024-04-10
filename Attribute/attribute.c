/**
 * @file attribute.c
 * 
 * @brief The `__attribute__` specifier is used to provide additional information to the compiler about functions, variables, or types.
 * 
 * You to specify special attributes of variables, function parameters, or structure, union, and, enum types.
 */

#include <stdio.h>

#include "attribute.h"

// Function with __attribute__ ((deprecated))
void old_function()
{
  printf("This function is deprecated.\n");
}

// Function with __attribute__ ((constructor))
void before_main()
{
  printf("This function will be called before main().\n");
}

// Function with __attribute__ ((destructor))
void after_main()
{
  printf("This function will be called after main().\n");
}

int main() 
{
  printf("Inside main function.\n");
  old_function();
  return 0;
}