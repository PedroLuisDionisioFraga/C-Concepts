#include <stdio.h>
#include <windows.h>

#define SPACER printf("\n------------------\r\n");

int main()
{
  printf("Hello\r World!\n"); // Output:  World!

  SPACER

  printf("Ped\rro\rLuis\n"); // Output:Luis

  SPACER

  printf("Pedro\r\nLuis\r\nFraga");
  // Output:
  // Pedro
  // Luis
  // Fraga

  SPACER

  // Progress indication
  for (int i = 0; i < 11; ++i)
  {
    printf("Processing: %d%%\r", i * 10);
    Sleep(200);
  }
  printf("\n");

  return 0;
}
