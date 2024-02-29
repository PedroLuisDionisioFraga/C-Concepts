#include <stdio.h>
#include <windows.h>

int main()
{
  for (int i = 0; i < 11; ++i)
  {
    printf("Processing: %d%%\r", i * 10);
    // fflush(stdout);
    Sleep(200);
  }
  printf("\n");

  return 0;
}
