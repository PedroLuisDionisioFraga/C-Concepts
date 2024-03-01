#include <stdio.h>

void say_hello_to(char name[], int age)
{
  printf("Hello, %s! You are %d years old.\n", name, age);
}

void mult(int f, int g);

int main()
{
  say_hello_to("Pedro", 21);  // Output: Hello, Pedro! You are 21 years old.
  //say_hello_to("Maria");  // Not works because the function expects two arguments and only one was passed

  sum(20, 30);  // Output: 20 + 30 = 50
  sum(10);  // Output: 10 + 30 = 40. The second argument is using the memory garbage value declared un your last called of function

  sub(25);  // Output: 25 - 30 - ? = ??. The third argument is using the memory garbage value while the second argument is using the memory garbage value declared un your last called of function `sum`
  sub(10, 9);  // Output: 10 - 9 - ? = ????. The third argument is using the memory garbage value declared un your last called of function `sub`

  // Conclusion: The function prototype is important to avoid errors in the function call
  mult(5, 5);  // Output: 5 * 5 = 25
  mult(52); // It will not work because we declared the function prototype with two arguments, it will broke the program and will not compile. If this line was commented, the program would compile and run with errors
  
  return 0;
}

void sum(int a, int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void sub(int c, int d, int e)
{
  printf("%d - %d - %d = %d\n", c, d, e, c - d - e);
}

void mult(int f, int g)
{
  printf("%d * %d = %d\n", f, g, f * g);
}
