#include <stdio.h>

union Test1
{
  int x;
  int y;
} test1;

void union_with_equal_members()
{
  printf("Size of union \"Test1\" is: %lu bytes\n", sizeof(test1));

  printf("When test1.x, 10, is assigned a value, test1.y is also assigned the same value.\n");
  test1.x = 10;
  printf("test1.x = %d\n", test1.x);
  printf("test1.y = %d\n", test1.y);

  printf("When test1.y, 20, is assigned a value, test1.x is also assigned the same value.\n");
  test1.y = 20;
  printf("test1.x = %d\n", test1.x);
  printf("test1.y = %d\n", test1.y);
}

int main(int argc, char const *argv[])
{
  union_with_equal_members();
  return 0;
}
