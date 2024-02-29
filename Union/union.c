/**
 * A union allocates a single shared memory space for its members. This space is large enough to store the largest member of the union and only one member can store data in the given instance.
 *
 */

#include <stdio.h>

// Define a union called Number with two members: an integer and a float
union Number
{
  int intValue;
  float floatValue;
};

// declaring multiple unions
union test1
{
  int x;
  int y;
} Test1;

union test2
{
  int x;
  char y;
} Test2;

union test3
{
  int arr[10];
  char y;
} Test3;

void size_of_unions()
{
  printf("Size of union \"Test1\" is: %lu\n", sizeof(Test1));
  printf("Size of union \"Test2\" is: %lu\n", sizeof(Test2));
  printf("Size of union \"Test3\" is: %lu\n", sizeof(Test3));
}

int main()
{
  // Create an instance of the Number union
  union Number num;

  // Assign a value to the intValue member
  num.intValue = 10;
  printf("Float value: %f\n", num.floatValue);
  printf("Int value: %d\n", num.intValue);
  printf("Size of union \"num\" is: %lu\n\n", sizeof(num));

  // Assign a value to the floatValue member
  num.floatValue = 3.14;
  printf("Float value: %f\n", num.floatValue);
  printf("Int value: %d\n", num.intValue);
  printf("Size of union \"num\" is: %lu\n\n", sizeof(num));

  // Assign a value to the intValue member
  num.intValue = 27698546;
  printf("Float value: %f\n", num.floatValue);
  printf("Int value: %d\n", num.intValue);
  printf("Size of union \"num\" is: %lu\n\n", sizeof(num));

  // Assign a value to the floatValue member
  num.floatValue = 2.75;
  printf("Float value: %f\n", num.floatValue);
  printf("Int value: %d\n", num.intValue);
  printf("Size of union \"num\" is: %lu\n\n", sizeof(num));

  /*
  When you first assign num.intValue = 10;, the integer value is stored in the union. At this point, if you try to access num.floatValue, it will not give a meaningful value because the memory is currently being interpreted as an integer. That's why you see Float value: 0.000000.

  Then, when you assign num.floatValue = 3.14;, the float value is stored in the union. This overwrites the integer value that was previously stored. Now, if you try to access num.intValue, it will give a strange value (1078523331), because the memory is now being interpreted as a float. This value is the integer representation of the binary data for the floating point number 3.14.
  */

  void size_of_unions();

  return 0;
}
