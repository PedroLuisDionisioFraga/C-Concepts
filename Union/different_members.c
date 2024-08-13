#include <stdio.h>
#include <stdint.h>

union test2
{
  uint16_t x;
  float y;
} Test2;

void union_with_different_members()
{
  printf("Size of union \"Test2\" is: %lu\n", sizeof(Test2));
  printf("Size of `uint16_t` is: %lu\n", sizeof(uint16_t));
  printf("Size of `float` is: %lu\n", sizeof(float));

  printf("When Test2.x is assigned a value, Test2.y is also assigned the same value.\n");
  Test2.x = 689;
  printf("Test2.x = %d\n", Test2.x);
  printf("Test2.y = %f\n", Test2.y);

  printf("When Test2.y is assigned a value, Test2.x is also assigned the same value.\n");
  Test2.y = 5.26f;
  printf("Test2.x = %d\n", Test2.x);  // It try to interpret the bits of the float as an integer
  printf("Test2.y = %f\n", Test2.y);
}

int main(int argc, char const *argv[])
{
  union_with_different_members();

  return 0;
}


