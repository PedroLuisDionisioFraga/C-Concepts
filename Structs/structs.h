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

void display_zombie_data(Zombie z);