/**
 * A pointer is a variable that holds the address of another variable.
 * It's declared by placing an asterisk (*) before the name of the pointer.
 * It's used to access the value of the variable it points to.
 * The `&` operator is used to get the address of a variable.
 *
 * ! EVERY TIMES TO INITIALIZE A POINTER, IT'S BETTER TO ASSIGN IT WITH NULL. (int *p = NULL;)
 * ! NEVER FORGOT TO DELETE THE POINTER AFTER USING IT. (free(p);)
 * * To do this use library `stdlib.h`.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 30;
  int *p_age = &age;

  printf("I am %d years old\n", age);
  // It's the address of the variable `age`.
  printf("The address of `age` is %p\n", &age);
  // It's the address that the pointer `p_age` points to.
  printf("The address that `p_age` points to is %p\n", p_age);
  // The `*` operator is used to dereference a pointer, i.e., to get the value stored at the address the pointer points to.
  printf("The value of age is %d\n", *p_age);
  // It's the address of the pointer itself, "p_age".
  printf("The address of the pointer itself, \"p_age\", is %p\n", &p_age);
  free(p_age); // It's better to delete the pointer after using it. free(p_age);

  printf("----------------\n\n");

  // Other examples
  int m = 29;
  int *ab = &m;

  printf("Address of `m` : %p\n", &m);
  printf("Value of `m` : %d\n\n", m);

  printf("Now ab is assigned with the address of `m`.\n");
  printf("Address of pointer `ab` appoints, address stored in `ab` : %p\n", ab);
  printf("Content of pointer `ab` : %d\n\n", *ab);
  printf("The address of pointer `ab` is %p\n", &ab);

  m = 34;
  printf("The value of `m` assigned to 34 now.\n");
  printf("Address of pointer `ab` appoints : %p\n", ab);
  printf("Content of pointer `ab` : %d\n\n", *ab);

  *ab = 7; // The content of pointer is changed.
  printf("The pointer variable ab is assigned with the value 7 now.\n");
  printf("Address of `m` : %p\n", &m);
  printf("Value of `m` : %d\n", m);
  printf("Address of pointer `ab` appoints : %p\n", ab);
  printf("Content of pointer `ab` : %d\n", *ab);
  free(ab); // It's better to delete the pointer after using it. free(ab);

  return 0;
}
