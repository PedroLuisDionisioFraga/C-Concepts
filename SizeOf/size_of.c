/**
 * The `sizeof` function returns the size of the variable or type in bytes, and this size is of type `size_t`
 * 
 * The %zu format specifier is used in the printf function to print values of type size_t.
 * 
 * - % is the format specifier introduction.
 * - z is a length modifier that specifies that the argument is of type size_t.
 * - u specifies that the argument should be formatted as an unsigned decimal integer.
 * 
 * All data types in C have a size, which is the number of bytes they occupy in memory.
 * The compiler reserves a specific amount of memory for that variable based on its data type, most of them was declared below.
 * 
 * 
 */
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main()
{
  printf("Size of char: %zu bytes\n", sizeof(char));
  printf("Size of short: %zu bytes\n", sizeof(short));
  printf("Size of int: %zu bytes\n", sizeof(int));
  printf("Size of long: %zu bytes\n", sizeof(long));
  printf("Size of long long: %zu bytes\n", sizeof(long long));
  printf("Size of float: %zu bytes\n", sizeof(float));
  printf("Size of double: %zu bytes\n", sizeof(double));
  printf("Size of long double: %zu bytes\n", sizeof(long double));
  printf("Size of bool: %zu bytes\n", sizeof(bool));
  printf("-----------------------------\n");
  printf("Size of void: %zu bytes\n", sizeof(void));
  printf("-----------------------------\n");
  printf("Size of int8_t: %zu bytes\n", sizeof(int8_t));
  printf("Size of int16_t: %zu bytes\n", sizeof(int16_t));
  printf("Size of int32_t: %zu bytes\n", sizeof(int32_t));
  printf("Size of int64_t: %zu bytes\n", sizeof(int64_t));
  printf("-----------------------------\n");
  printf("Size of uint8_t: %zu bytes\n", sizeof(uint8_t));
  printf("Size of uint16_t: %zu bytes\n", sizeof(uint16_t));
  printf("Size of uint32_t: %zu bytes\n", sizeof(uint32_t));
  printf("Size of uint64_t: %zu bytes\n", sizeof(uint64_t));
  printf("-----------------------------\n");
  printf("Size of intptr_t: %zu bytes\n", sizeof(intptr_t));
  printf("Size of uintptr_t: %zu bytes\n", sizeof(uintptr_t));
  printf("-----------------------------\n");
  printf("Size of char*: %zu bytes\n", sizeof(char*));
  printf("Size of short*: %zu bytes\n", sizeof(short*));
  printf("Size of int*: %zu bytes\n", sizeof(int*));
  printf("Size of long*: %zu bytes\n", sizeof(long*));
  printf("Size of long long*: %zu bytes\n", sizeof(long long*));
  printf("Size of float*: %zu bytes\n", sizeof(float*));
  printf("Size of double*: %zu bytes\n", sizeof(double*));
  printf("Size of long double*: %zu bytes\n", sizeof(long double*));
  printf("Size of void*: %zu bytes\n", sizeof(void*));
  printf("-----------------------------\n");
  printf("Size of int8_t*: %zu bytes\n", sizeof(int8_t*));
  printf("Size of int16_t*: %zu bytes\n", sizeof(int16_t*));
  printf("Size of int32_t*: %zu bytes\n", sizeof(int32_t*));
  printf("Size of int64_t*: %zu bytes\n", sizeof(int64_t*));
  printf("-----------------------------\n");
  printf("Size of uint8_t*: %zu bytes\n", sizeof(uint8_t*));
  printf("Size of uint16_t*: %zu bytes\n", sizeof(uint16_t*));
  printf("Size of uint32_t*: %zu bytes\n", sizeof(uint32_t*));
  printf("Size of uint64_t*: %zu bytes\n", sizeof(uint64_t*));
  printf("-----------------------------\n");
  printf("Size of intptr_t*: %zu bytes\n", sizeof(intptr_t*));
  printf("Size of uintptr_t*: %zu bytes\n", sizeof(uintptr_t*));


  return 0;
}
