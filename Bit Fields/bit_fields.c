/**
 ** The bit fields are used to optimize memory usage, the bit fields always located within 8 bits storage units even when other qualifiers are used (unsigned, int, long, etc...).
 * They are used to define the size of the fields in a struct.
 * The `:` operator is used to define the size of the field in bits.
 * The `sizeof` operator is used to get the size of the struct.
 * typedef struct
 * {
 *  unsigned int bit0 : 1;
 *  unsigned int bit01to03 : 3;
 *  unsigned int bit4 : 1;
 *  unsigned int bits5to6 : 2;
 * } byteBits;
 *
 *! If the values overflow the defined memory allocate you will have this error:
 *! warning: large integer implicitly truncated to unsigned type [-Woverflow]
 */

// Define a new structure type with bit fields
typedef struct
{
  unsigned int bit_volts : 1; // Can hold values from 0 to 1
  unsigned int bit_amps : 1;  // Can hold values from 0 to 1
  unsigned int bit_humid : 2; // Can hold values from 0 to 3
  unsigned int bit_temp : 1;  // Can hold values from 0 to 1
  unsigned int bit_tach : 3;  // Can hold values from 0 to 7
} byteBits;

int main(void)
{
  byteBits x; // Declare a variable of type byteBits

  x.bit_volts = 1;    // This can hold values from 0 to 1
  x.bit_amps = 0;     // This can hold values from 0 to 1
  x.bit_humid = 0b10; // This can hold values from 0 to 3
  x.bit_temp = 0x0;   // This can hold values from 0 to 1
  x.bit_tach = 7;     // This can hold values from 0 to 7

  return 0;
}
