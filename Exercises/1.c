#include <stdio.h>

int main(int argc, char const *argv[])
{
  int m = 300;
  float fx = 300.600006;
  char cht = 'z';

  printf("Address of m: %p\n", &m);
  printf("Address of fx: %p\n", &fx);
  printf("Address of cht: %p\n\n", &cht);

  printf("Value of m: %d\n", m);
  printf("Value of fx: %f\n", fx);
  printf("Value of cht: %c\n", cht);


  return 0;
}
