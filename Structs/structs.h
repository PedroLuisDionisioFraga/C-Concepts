#include <string.h>
#include <stdio.h>
#include <stdint.h>

struct Human
{
  char name[50]; /**< The name of the human. */
  int age;       /**< The age of the human. */
  float salary;  /**< The salary of the human. */
} human1, human2;
// The `human1` and `human2` are global variables of type struct `Human`.

void display_human_data(struct Human p);

typedef struct
{
  char name[50];
  int age;
  uint8_t brain_eaten;
} Zombie;

/**
 * The _t suffix in `Zombie_t` is a naming convention used in C and C++ to indicate that a type is a typedef.
 * This convention is particularly common in C, where typedefs are often used to create shorter or more meaningful names for complex or frequently-used types. However, it's not enforced by the language itself and is not universally followed by all C programmers.
 */
typedef Zombie Zombie_t;

void display_zombie_data(Zombie z);