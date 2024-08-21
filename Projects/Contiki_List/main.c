#include <stdio.h>
#include <stdlib.h>

#include "list.h"

typedef struct
{
  int x;
  int y;
  struct coordinates_t *next;
} coordinate_t;

typedef struct
{
  struct name_t *next;
  char *name;
} name_t;

int main()
{
  // `names_list` is a pointer to a pointer to a `names`, that is a void pointer
  LIST(names);
  list_init(names);

  /* -------------------- NAMES -------------------- */
  /* ------------------------------------------------ */
  name_t *alice = (name_t *)malloc(sizeof(name_t));
  alice->name = "Alice";
  list_add(names, alice);

  name_t *bob = (name_t *)malloc(sizeof(name_t));
  bob->name = "Bob";
  list_add(names, bob);

  name_t *charlie = (name_t *)malloc(sizeof(name_t));
  charlie->name = "Charlie";
  list_add(names, charlie);

  /* ------------------------------------------------ */
  // Head
  name_t *head = (name_t *)list_head(names);
  printf("head->name: %s\n", head->name);
  // Tail
  name_t *tail = (name_t *)list_tail(names);
  printf("tail->name: %s\n", tail->name);

  /* ------------------------------------------------ */
  // Iterate over the list
  name_t *act;
  for (act = (name_t *)list_head(names); act != NULL; act = (name_t *)act->next)
  {
    printf("act->name: %s\n", act->name);
  }

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
  // Head
  coordinate_t *head_c = (coordinate_t *)list_head(coordinates);
  printf("head_c->x: %d, head_c->y: %d\n", head_c->x, head_c->y);
  // Tail
  coordinate_t *tail_c = (coordinate_t *)list_tail(coordinates);
  printf("tail_c->x: %d, tail_c->y: %d\n", tail_c->x, tail_c->y);

  /* ------------------------------------------------ */

  free(a);
  free(b);
  free(c);

  return 0;
}
