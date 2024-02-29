/**
 * The `sizeof` operator is used to calculate the size of a variable or data type.
 */
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main()
{
  printf("Size of char: %lu bytes\n", sizeof(char));
  printf("Size of short: %lu bytes\n", sizeof(short));
  printf("Size of int: %lu bytes\n", sizeof(int));
  printf("Size of long: %lu bytes\n", sizeof(long));
  printf("Size of long long: %lu bytes\n", sizeof(long long));
  printf("Size of float: %lu bytes\n", sizeof(float));
  printf("Size of double: %lu bytes\n", sizeof(double));
  printf("Size of long double: %lu bytes\n", sizeof(long double));
  printf("Size of bool: %lu bytes\n", sizeof(bool));
  printf("-----------------------------\n");
  printf("Size of void: %lu bytes\n", sizeof(void));
  printf("-----------------------------\n");
  printf("Size of int8_t: %lu bytes\n", sizeof(int8_t));
  printf("Size of int16_t: %lu bytes\n", sizeof(int16_t));
  printf("Size of int32_t: %lu bytes\n", sizeof(int32_t));
  printf("Size of int64_t: %lu bytes\n", sizeof(int64_t));
  printf("-----------------------------\n");
  printf("Size of uint8_t: %lu bytes\n", sizeof(uint8_t));
  printf("Size of uint16_t: %lu bytes\n", sizeof(uint16_t));
  printf("Size of uint32_t: %lu bytes\n", sizeof(uint32_t));
  printf("Size of uint64_t: %lu bytes\n", sizeof(uint64_t));
  printf("-----------------------------\n");
  printf("Size of intptr_t: %lu bytes\n", sizeof(intptr_t));
  printf("Size of uintptr_t: %lu bytes\n", sizeof(uintptr_t));
  printf("-----------------------------\n");
  printf("Size of char*: %lu bytes\n", sizeof(char*));
  printf("Size of short*: %lu bytes\n", sizeof(short*));
  printf("Size of int*: %lu bytes\n", sizeof(int*));
  printf("Size of long*: %lu bytes\n", sizeof(long*));
  printf("Size of long long*: %lu bytes\n", sizeof(long long*));
  printf("Size of float*: %lu bytes\n", sizeof(float*));
  printf("Size of double*: %lu bytes\n", sizeof(double*));
  printf("Size of long double*: %lu bytes\n", sizeof(long double*));
  printf("Size of void*: %lu bytes\n", sizeof(void*));
  printf("-----------------------------\n");
  printf("Size of int8_t*: %lu bytes\n", sizeof(int8_t*));
  printf("Size of int16_t*: %lu bytes\n", sizeof(int16_t*));
  printf("Size of int32_t*: %lu bytes\n", sizeof(int32_t*));
  printf("Size of int64_t*: %lu bytes\n", sizeof(int64_t*));
  printf("-----------------------------\n");
  printf("Size of uint8_t*: %lu bytes\n", sizeof(uint8_t*));
  printf("Size of uint16_t*: %lu bytes\n", sizeof(uint16_t*));
  printf("Size of uint32_t*: %lu bytes\n", sizeof(uint32_t*));
  printf("Size of uint64_t*: %lu bytes\n", sizeof(uint64_t*));
  printf("-----------------------------\n");
  printf("Size of intptr_t*: %lu bytes\n", sizeof(intptr_t*));
  printf("Size of uintptr_t*: %lu bytes\n", sizeof(uintptr_t*));


  return 0;
}
