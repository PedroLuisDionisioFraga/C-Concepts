#include <stdio.h>
#include <stdint.h>

/**
 * @brief The compiler align the bits of each element of struct in sequence of less significant bit to most significant bit.
 *
 */
union BitFieldUnion
{
  struct
  {
    uint16_t a : 3;
    uint16_t b : 5;
    uint16_t c : 1;
  } bits;
  uint16_t value;
};

int main()
{
  // Create an instance of the union
  union BitFieldUnion example;

  // Assign values to the bit fields
  example.bits.a = 5;  // 5 in binary is 101, fits in 3 bits
  example.bits.b = 17; // 17 in binary is 10001, fits in 5 bits
  example.bits.c = 1;  // 1 in binary is 1, fits in 1 bit

  // Print the values of the bit fields
  printf("Bit fields:\n");
  printf("a: %u\n", example.bits.a);
  printf("b: %u\n", example.bits.b);
  printf("c: %u\n", example.bits.c);
  printf("Entire value: %u\n\n", example.value);

  printf("Change the value of the entire value\n");
  example.value = 65534;
  // It try represents the value 65534 in a, b and c but it can't because the value is too big and it get the remainder of the division by 2^3, 2^5 and 2^1
  printf("a: %u\n", example.bits.a);
  printf("b: %u\n", example.bits.b);
  printf("c: %u\n", example.bits.c);
  printf("Entire value: %u\n", example.value);

  return 0;
}