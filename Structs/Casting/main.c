/**
 * @file main.c
 * @author Pedro Luis Dionísio Fraga (pedrodfraga@hotmail.com)
 * @brief See the casting between two structs with different sizes
 * @version 0.1
 * @date 2024-10-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>
#include <stdint.h>

#include "beacon_data.h"
#include "small_beacon_data.h"

int main()
{
  unsigned int x = 0x12345678;            // uint32_t
  unsigned char *c = (unsigned char *)&x; // uint8_t

  if (*c == 0x78)
    printf("Little Endian\n");
  else if (*c == 0x12)
    printf("Big Endian\n");
  else
    printf("Unknown Endianness\n");

  // Initialize beacon_data_t with some values
  struct beacon_data_t beacon = {
      .flag_init = 0x7E,
      .mac = {0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF, 0x00, 0x11},
      .sensorId = 0x02,
      .total = {0x34, 0x12, 0x00, 0x00},
      .total_CW = {0x78, 0x56, 0x00, 0x00},
      .total_CCW = {0x00, 0x00, 0x00, 0x00},
      .dir = 0x01,
      .flag_end = 0x7E,
      .reserved = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};

  // Print raw memory of beacon_data_t
  uint8_t *ptr_beacon = (uint8_t *)&beacon;
  size_t size_beacon = sizeof(struct beacon_data_t);
  printf("Raw beacon_data_t memory (size: %zu bytes):\n", size_beacon);
  for (size_t i = 0; i < size_beacon; i++)
  {
    printf("Address: %p; Content %02X\n", (ptr_beacon + i), *(ptr_beacon + i));
  }
  printf("\n");

  // Cast the larger struct beacon_data_t to the smaller struct small_data_t
  struct small_data_t *small_ptr = (struct small_data_t *)&beacon;

  // Print raw memory of small_data_t after cast
  uint8_t *ptr = (uint8_t *)small_ptr;
  size_t size = sizeof(struct small_data_t);

  printf("Raw small_data_t memory (after cast from beacon_data_t, size: %zu bytes):\n", size);
  for (size_t i = 0; i < size_beacon; i++)
  {
    printf("Address: %p; Content %02X\n", (ptr_beacon + i), *(ptr_beacon + i));
  }
  printf("\n");

  return 0;
}
