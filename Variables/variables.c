/**
 ** Variables is a placeholder for a specific value.
 ** In C, we need to declare the type of the variable before using it.
 ** The syntax is: type name = value;
 ** The variables can't start with a number, can't have spaces, and can't be a reserved word, .
 ** The variable name convention in C and C++ snake case.
 *  Example: int my_age = 30;
 *
 * In the `printf` function, we use to print the value of the variable:
 *  - %c for characters, use single quotes to define
 *  - %s for strings, use double quotes to define
 *  - %d print and scan integer only in decimal format
 *  - %ld for long integers
 *  - %f for floats
 *    - %.2f for 2 decimal places
 *  - %2
 *  - %-10s

 *  - %lf for doubles
 *  - %Lf for long doubles
 *  - %x for hexadecimal
 *  - %o for octal
 *  - %p for pointers
 *  - %u for unsigned integers
 *  - %e for scientific notation
 *  - %g for the shorter of %e or %f
 *  - %i print integer and scan integer in format of octal, decimal or hexadecimal
 *
 * Escape sequences are used to represent special characters in a string:
 *  - \n for newline
 *  - \r for carriage return (move the cursor to the beginning of the line)
 *  - \t for tab
 *  - \b for backspace
 *  - \r for carriage return
 *  - \f for form feed
 *  - \v for vertical tab
 *  - \\ for backslash
 *  - \' for single quote
 *  - \" for double quote
 *  - \? for question mark
 *  - \0 for null character
 *  - \a for alert
 *  - \ooo for octal number
 *  - \xhh for hexadecimal number
 * Examples and outputs:
 *  printf("Hello\nWorld\n");
 *    Hello
 *    World
 * ------------------------------
 * - printf("Hello\rWorld\n");
 *   World
 * ------------------------------
 *  - printf("Hello\tWorld\n");
 *    Hello   World
 * ------------------------------
 *  - printf("Hello\bWorld\n");
 *    HellWorld
 * ------------------------------
 *  - printf("Hello\rWorld\n");
 *    World
 * ------------------------------
 *  - printf("Hello\fWorld\n");
 *    Hello
 *    World
 * ------------------------------
 *  - printf("Hello\vWorld\n");
 *    Hello
 *    World
 * ------------------------------
 *  - printf("Hello\\World\n");
 *    Hello\World
 * ------------------------------
 *  - printf("Hello\'World\n");
 *    Hello'World
 * ------------------------------
 *  - printf("Hello\"World\n");
 *    Hello"World
 * ------------------------------
 *  - printf("Hello\?World\n");
 *    Hello?World
 * ------------------------------
 *  - printf("Hello\0World\n");
 *    Hello
 * ------------------------------
 *  - printf("Hello\aWorld\n");
 *    HelloWorld
 * ------------------------------
 *  - printf("Hello\101World\n");
 *    HelloAWorld
 * ------------------------------
 *  - printf("Hello\x41World\n");
 *    HelloAWorld
 */

#include <stdint.h>
#include <stdio.h>
#include <math.h>

//* To `external` example
#include "external_variables.c"
#include "c_to_cpp.cpp"

#define SPACER printf("\n------------------\n\n");

//* To `static`example
void foo()
{
  int a = 10;
  static int sa = 10;

  a += 5;
  sa += 5;

  printf("a = %d, sa = %d\n", a, sa);
}

int main()
{
  int age = 30;
  printf("I am %d years old\n", age);

  //* Char and char array
  // char is a single character
  char grade = 'A';
  printf("I got a %c on my test\n", grade);
  // char array is a string
  char name[] = "Pedro";
  printf("My name is %s\n", name);
  // char array with escape sequences
  char message[] = "Hello\nWorld\n";
  printf("%s", message);
  // char array can have a specific size, it can have in max the specified size but no have problem to have less
  char city[15] = "New York";
  printf("I live in %s\n", city);

  SPACER

  //* Constants it's a immutable value
  const int MONTHS = 12;
  printf("There are %d months in a year\n", MONTHS);
  // MONTHS = 10; // Error: assignment of read-only variable 'MONTHS'

  //* Input from the user
  int user_age;
  printf("Enter your age: ");
  scanf("%d", &user_age);
  printf("You are %d years old\n", user_age);

  SPACER

  //* Arrays
  int numbers[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
  {
    printf("The number %d is %d\n", i, numbers[i]);
  }

  SPACER

  //* Floats and doubles
  // Declare and initialize the variables
  float number1 = 1.12345678901234567890f; // Precision : 7
  double number2 = 1.12345678901234567890; // Precision : 15
  long double number3 = 1.1234567890123456789L;

  // Print out the sizes
  printf("The value of number1 is %f\n", number1);
  printf("sizeof float : %zu\n", sizeof(float));

  printf("The value of number2 is %f\n", number2);
  printf("sizeof double : %zu\n", sizeof(double));

  printf("The value of number3 is %Lf\n", number3);
  printf("sizeof long double : %zu\n", sizeof(long double));

  SPACER

  //* Volatile
  // The volatile keyword is used to tell the compiler not to optimize the variable because it can be changed by something outside the program, in other words, it can be changed by the hardware, when the variable is used in a multi-threaded environment, or when the variable is used in a signal handler.
  //! Used often in embedded systems.

  SPACER

  //* Static
  // Static defined local variables do not lose their value between function calls. In other words they are global variables, but scoped to the local function they are defined in.
  // Static global variables are not visible outside of the C file they are defined in.
  // Static functions are not visible outside of the C file they are defined in.
  for (int i = 0; i < 5; i++)
  {
    foo();
  }

  SPACER

  //* External
  // The extern keyword is used to declare a global variable that will be used in other files.
  printf("The value of `mother_name` is %s\n", mother_name);
  say_hello_to_mom();
  user_say_hello_to_dad();

  return 0;
}
