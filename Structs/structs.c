/**
 * *Structs*
 * It's a container that can hold multiple data types.
 * Exists two methods to declare a struct:
 * 1. Declaring a struct and then declaring a variable of that type, it can be access where is created.
 *
 *  struct Human {
 *    char name[50];
 *    int age;
 *    float salary;
 *  };
 *
 * struct Human p1;
 *
 * 2. Declaring a struct and a variable of that type in the same line, it can be access when the archive with this struct is included.
 *  Example:
 *  struct Human {
 *   char name[50];
 *   int age;
 *   float salary;
 *  } p1;
 *
 * The `.` operator is used to access the members of a struct.
 *
 * *Typedef*
 * `typedef` is used to give a new name to an existing type. It’s often used with structures to simplify their declaration creating a alias.
 * The keyword `struct` is not required.
 */
#include "structs.h"

void display_human_data(struct Human p)
{
  printf("Name: %s\n", p.name);
  printf("Age: %d\n", p.age);
  printf("Salary: %.2f\n", p.salary);
}

void display_zombie_data(Zombie z)
{
  printf("Name: %s\n", z.name);
  printf("Age: %d\n", z.age);
  printf("Brain eaten: %d\n", z.brain_eaten);
}

int main()
{
  // The `p1` is a local variable of type `struct Human`.
  struct Human p1;

  p1.age = 30;
  p1.salary = 100000.00;
  strcpy(p1.name, "Pedro");

  display_human_data(p1);

  human1.age = 25;
  human1.salary = 50000.00;
  strcpy(human1.name, "Maria");

  display_human_data(human1);

  human2.age = 35;
  human2.salary = 150000.00;
  strcpy(human2.name, "João");

  display_human_data(human2);

  Zombie z1;
  z1.age = 100;
  z1.brain_eaten = 5;
  strcpy(z1.name, "Zumbi 1");

  display_zombie_data(z1);

  // Applying typedef to the struct Human, it's possible to declare a variable of type Human without the keyword `struct`, can be used globally.
  typedef struct Human HumanStruct;

  HumanStruct p2;
  p2.age = 40;
  p2.salary = 200000.00;
  strcpy(p2.name, "Carlos");

  display_human_data(p2);

  return 0;
}
