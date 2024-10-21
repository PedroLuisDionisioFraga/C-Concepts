# Casting and Endianness in C

## Casting Between Structs
Casting between structs in C can be useful when you need to interpret the same block of memory in different ways.\
For example, consider the following two structs:
```c
struct beacon_data_t {
  uint8_t flag_init;
  uint8_t mac[8];
  uint8_t sensorId;
  uint8_t total[4];
  uint8_t total_CW[4];
  uint8_t total_CCW[4];
  uint8_t dir;
  uint8_t flag_end;
  uint8_t reserved[7];
};

struct small_data_t {
  uint8_t flag_init;
  uint8_t mac[4];
  uint8_t sensorId;
  uint8_t total[2];
};
```
You can cast a pointer to beacon_data_t to a pointer to small_data_t to interpret the first part of the beacon_data_t struct as a small_data_t struct

## Endianness
Endianness refers to the order in which bytes are stored in memory. There are two main types of endianness:
- **Big Endian**: The most significant byte is stored at the smallest memory address.
- **Little Endian**: The least significant byte is stored at the smallest memory address.

The type of endianness used by a system is determined by the hardware architecture and can affect how data is interpreted when casting between different types.\
Here is an example of checking the endianness of your system:
```c
unsigned int x = 0x12345678;            // uint32_t
unsigned char *c = (unsigned char*)&x;  // uint8_t

if (*c == 0x78)
  printf("Little Endian\n");
else if (*c == 0x12)
  printf("Big Endian\n");
else
  printf("Unknown Endianness\n");
```

## Conclusion
Casting between structs can be useful when you need to interpret the same block of memory in different ways.\
Endianness refers to the order in which bytes are stored in memory and can affect how data is interpreted when casting between different types.
In this case the endianness of the system is Little Endian.

