/**
 * The `register` keyword suggests to the compiler that the variable may be heavily used and that you recommend it be stored in the CPU's register if possible, for faster access. However, modern compilers are often better at optimizing this than programmers, so the register keyword is often ignored.
 */

#include <stdio.h>
#include <limits.h>

#define OVERFLOW 0

// TODO: Use pointers to store the result of the factorial function
unsigned long long factorial(int n)
{
  register int i;
  unsigned long long fact = 1;

  for (i = 1; i <= n; i++)
  {
    // Reduce the `ULLONG_MAX` limit by dividing it by `i` before multiplying it by `i`
    // `ULLONG_MAX / i` is same that `fact * i`
    if (ULLONG_MAX / i < fact)
    {
      // If this multiplication would result in overflow, return an error code
      return OVERFLOW;
    }
    fact *= i;
  }
  return fact;
}

int main()
{
  int num = 50;
  unsigned long long result = factorial(num);

  if (result == OVERFLOW)
    printf("Error: The factorial of %d is too large to be represented.\n", num);
  else
    printf("The factorial of %d is %llu\n", num, result);

  return 0;
}