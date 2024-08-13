#include <stdio.h>
#include <stdint.h>

/**
 * @brief The compiler aligns data structures in memory to optimize access speed. This often means padding the structure to ensure that each member is aligned on a boundary suitable for its type.
 * On many systems, float types require alignment on a 4-byte boundary.
 * The size of a union is determined by the size of its largest member, but it also needs to satisfy the alignment requirements of all its members.
 * In this case, the largest member by size is uint16_t x[5] which is 10 bytes.
 * However, to satisfy the alignment requirement of the float member, the union's size must be a multiple of 4 bytes.
 *
 */
union DifferentType
{
  uint16_t x[5];
  float y;
} different_type;

void different_members()
{
  printf("Size of union \"DifferentType\" is: %lu\n", sizeof(different_type));
  printf("Size of `uint16_t [5]` is: %lu\n", 5 * sizeof(uint16_t));
  printf("Size of `float` is: %lu\n", sizeof(float));

  printf("When different_type.x[0] is assigned a value, different_type.y is also assigned the same value.\n");
  different_type.x[0] = 689;
  different_type.x[1] = 690;
  different_type.x[2] = 691;
  different_type.x[3] = 692;
  different_type.x[4] = 693;
  printf("x[0] = %d, x[1] = %d, x[2] = %d, x[3] = %d, x[4] = %d\n", different_type.x[0], different_type.x[1], different_type.x[2], different_type.x[3], different_type.x[4]);
  printf("y = %f\n", different_type.y);

  printf("When different_type.y is assigned a value, x[0] and x[1] is also assigned the same value.\n");
  different_type.y = 5.26f;
  printf("x[0] = %d, x[1] = %d, x[2] = %d, x[3] = %d, x[4] = %d\n", different_type.x[0], different_type.x[1], different_type.x[2], different_type.x[3], different_type.x[4]);
  printf("y = %f\n\n\n", different_type.y);
}

union SameType
{
  uint16_t x[5];
  uint16_t y;
} same_type;

void same_members()
{
  printf("Size of union \"SameType\" is: %lu\n", sizeof(same_type));
  printf("Size of `uint16_t [5]` is: %lu\n", 5 * sizeof(uint16_t));

  printf("When same_type.x[0] is assigned a value, same_type.y is also assigned the same value.\n");
  same_type.x[0] = 689;
  same_type.x[1] = 690;
  same_type.x[2] = 691;
  same_type.x[3] = 692;
  same_type.x[4] = 693;
  printf("x[0] = %d, x[1] = %d, x[2] = %d, x[3] = %d, x[4] = %d\n", same_type.x[0], same_type.x[1], same_type.x[2], same_type.x[3], same_type.x[4]);
  printf("y = %d\n", same_type.y);

  printf("When same_type.y is assigned a value, same_type.x[0] is also assigned the same value.\n");
  same_type.y = 5;
  printf("x[0] = %d, x[1] = %d, x[2] = %d, x[3] = %d, x[4] = %d\n", same_type.x[0], same_type.x[1], same_type.x[2], same_type.x[3], same_type.x[4]);
  printf("y = %d\n", same_type.y);
}

int main(int argc, char const *argv[])
{
  different_members();
  same_members();

  return 0;
}
