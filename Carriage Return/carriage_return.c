#include <stdio.h>

#define SPACER printf("\n------------------\r\n");

int main()
{
  printf("Hello\r World!\n");  // Output:  World!

  SPACER

  printf("Ped\rro\rLuis\n");  // Output:Luis

  SPACER

  printf("Pedro\r\nLuis\r\nFraga");
  // Output:
  // Pedro
  // Luis
  // Fraga
  
  return 0;
}
