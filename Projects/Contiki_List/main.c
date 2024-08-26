#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

typedef struct
{
  int x;
  int y;
  struct coordinate_t *next;
} coordinate_t;

typedef struct
{
  struct name_t *next;
  char *name;
  char *surname;
} name_t;

bool name_condition(const void *name)
{
  return (strcmp(((name_t *)name)->name, "Bob") == 0);
}

void print_name(const void *item)
{
  name_t *name = (name_t *)item;
  printf("name: %s, surname: %s\n", name->name, name->surname);
}

void print_coordinates(const void *item)
{
  coordinate_t *coordinate = (coordinate_t *)item;
  printf("x: %d, y: %d\n", coordinate->x, coordinate->y);
}

int main()
{
  // `names_list` is a pointer to a pointer to a `names`, that is a void pointer
  LIST(names);
  list_init(names);

  /* -------------------- NAMES -------------------- */
  /* ------------------------------------------------ */
  name_t *alice = (name_t *)malloc(sizeof(name_t));
  alice->name = "Alice";
  alice->surname = "Wonderland";
  list_add(names, alice);

  name_t *bob = (name_t *)malloc(sizeof(name_t));
  bob->name = "Bob";
  bob->surname = "Marley";
  list_add(names, bob);

  name_t *charlie = (name_t *)malloc(sizeof(name_t));
  charlie->name = "Charlie";
  charlie->surname = "Brown";
  list_add(names, charlie);

  /* ------------------------------------------------ */
  // Length
  printf("The length of the list is: %d\n", list_length(names));
  // Head
  name_t *head = (name_t *)list_head(names);
  printf("head->name: %s, head->surname: %s\n", head->name, head->surname);
  // Tail
  name_t *tail = (name_t *)list_tail(names);
  printf("tail->name: %s, tail->surname: %s\n", tail->name, tail->surname);
  // Find
  name_t *find = (name_t *)list_find(names, &name_condition);
  printf("The name `Bob` was found? %s\n", find != NULL ? "Yes" : "No");

  /* ------------------------------------------------ */
  // Iterate over the list
  list_print(names, &print_name);
  printf("\n");

  /* ------------------------------------------------ */
  free(alice);
  free(bob);
  free(charlie);

  /* ----------------- COORDINATES ----------------- */
  LIST(coordinates);
  list_init(coordinates);

  /* ------------------------------------------------ */
  coordinate_t *a = (coordinate_t *)malloc(sizeof(coordinate_t));
  a->x = 1;
  a->y = 2;
  list_add(coordinates, a);

  coordinate_t *b = (coordinate_t *)malloc(sizeof(coordinate_t));
  b->x = 3;
  b->y = 4;
  list_add(coordinates, b);

  coordinate_t *c = (coordinate_t *)malloc(sizeof(coordinate_t));
  c->x = 5;
  c->y = 6;
  list_add(coordinates, c);

  /* ------------------------------------------------ */
  printf("The struct `coordinate_t` are not adapted to use the  `list` library\n");
  // Head
  coordinate_t *head_c = (coordinate_t *)list_head(coordinates);
  printf("head_c->x: %d, head_c->y: %d\n", head_c->x, head_c->y);
  // Tail
  coordinate_t *tail_c = (coordinate_t *)list_tail(coordinates);
  printf("tail_c->x: %d, tail_c->y: %d\n", tail_c->x, tail_c->y);

  /* ------------------------------------------------ */
  // Iterate over the list
  list_print(coordinates, &print_coordinates);

  free(a);
  free(b);
  free(c);

  return 0;
}
