/**
 * Program to read and display string.
 * `gets()` and `puts()` functions are used to read and display string respectively, is similar to `scanf()` and `printf()` functions.
 * Concatenation two strings without using `strcat()` function. (https://www.programiz.com/c-programming/examples/concatenate-string)
 * Copy string without using `strcpy()` function. (https://www.programiz.com/c-programming/examples/copy-string)
 * Remove characters in string except alphabets. (https://www.programiz.com/c-programming/examples/remove-characters-string)
 * Sort strings in dictionary order. (https://www.programiz.com/c-programming/examples/lexicographical-order)
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// To use `tolower()` function
#include <ctype.h>

uint8_t find_frequency_of_char()
{
  char str[1000], ch;
  int count = 0;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  printf("Enter a character to find its frequency: ");
  scanf(" %c", &ch); // Added a space before %c to consume the newline character

  for (int i = 0; str[i] != '\0'; i++)
  {
    if (ch == str[i])
      ++count;
  }

  printf("Frequency of %c = %d\r\n", ch, count);
  return count;
}

void count_vowels_consonants_digital_and_white_spaces()
{
  char line[150];
  int vowels, consonant, digit, space;

  // initialize all variables to 0
  vowels = consonant = digit = space = 0;

  // get full line of string input
  printf("Enter a line of string: ");
  scanf(" %[^\n]", line); // Added a space before %[^\n] to consume the newline character

  // loop through each character of the string
  for (int i = 0; line[i] != '\0'; ++i)
  {

    // convert character to lowercase
    line[i] = tolower(line[i]);

    // check if the character is a vowel
    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u')
    {
      // increment value of vowels by 1
      ++vowels;
    }

    // if it is not a vowel and if it is an alphabet, it is a consonant
    else if ((line[i] >= 'a' && line[i] <= 'z'))
    {
      ++consonant;
    }

    // check if the character is a digit
    else if (line[i] >= '0' && line[i] <= '9')
    {
      ++digit;
    }

    // check if the character is an empty space
    else if (line[i] == ' ')
    {
      ++space;
    }
  }

  printf("Vowels: %d\r\n", vowels);
  printf("Consonants: %d\r\n", consonant);
  printf("Digits: %d\r\n", digit);
  printf("White spaces: %d\r\n", space);
}

uint8_t length_of_string(char s[])
{
  uint8_t i;

  for (i = 0; s[i] != '\0'; ++i)
    ;

  // printf("Length of the string: %d", i);
  return i;
}

char *concat_strings(char *s1, char *s2)
{
  // Allocate enough memory for the concatenated string
  char *result = malloc(strlen(s1) + strlen(s2) + 1); // +1 for the null-terminator

  // Check if the memory allocation was successful
  if (result == NULL)
  {
    printf("Error: unable to allocate required memory\n");
    return NULL;
  }

  // Copy the first string into the result
  char *p = result;
  while (*s1 != '\0')
  {
    *p++ = *s1++;
  }

  // Append the second string onto the end of the result
  while (*s2 != '\0')
  {
    *p++ = *s2++;
  }

  // Null-terminate the result
  *p = '\0';

  return result;
}

int main()
{
  char name[30];
  printf("Enter name: ");
  // Function to read string from user.
  gets(name);
  printf("Name: ");
  // Function to display string.
  puts(name);

  find_frequency_of_char();

  count_vowels_consonants_digital_and_white_spaces();

  uint8_t length;
  length = length_of_string("name");
  printf("Length of the string \"name\": %d\r\n", length);

  // TODO: Isn't printing, fiz how to debug
  char *string_concatenate;
  string_concatenate = concat_strings("Pedro ", "Luis");
  printf("Concatenated string: %s", string_concatenate); // Removed the & before string_concatenate

  return 0;
}