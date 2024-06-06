/**
 * @file file_io.c
 * @author Pedro Luis Dionísio Fraga (pedrodfraga@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

void reverse(char *str)
{
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++)
  {
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
}

int main()
{
  FILE *inputFile = fopen("in.txt", "r");
  FILE *outputFile = fopen("out.txt", "w");

  if (inputFile == NULL)
  {
    fprintf(stderr, "Failed to open in.txt for reading.\n");
    return 1;
  }

  if (outputFile == NULL)
  {
    fprintf(stderr, "Failed to open out.txt for writing.\n");
    return 1;
  }

  char line[MAX_LINE_LENGTH];

  while (fgets(line, sizeof(line), inputFile))
  {
    // Remove the newline character at the end of the line.
    line[strcspn(line, "\n")] = '\0';

    // Reverse the line and write it to the output file.
    reverse(line);
    fprintf(outputFile, "%s\n", line);
  }

  fclose(inputFile);
  fclose(outputFile);

  return 0;
}