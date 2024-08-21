#include <stdio.h>
#include <stdint.h>

/**
 * @brief 
 * 
 * @note The `raw` member is an array of 31 bytes and `raw`is a pointer to the first element of the array.
 */
typedef union
{
  struct
  {
    uint8_t flag_init;    // 0x7E Byte 0
    uint8_t mac[8];       // Bytes 1 to 8
    uint8_t sensorId;     // Byte 9
    uint8_t total[4];     // Bytes 10 to 13
    uint8_t total_CW[4];  // Bytes 14 to 17
    uint8_t total_CCW[4]; // Bytes 18 to 21
    uint8_t dir;          // Byte 22
    uint8_t flag_end;     // 0x7E Byte 23
    uint8_t reserved[7];  // Bytes 24 to 30
  } bits;
  uint8_t raw[31];
} beacon;

int main(int argc, char const *argv[])
{
  beacon b;

  printf("Size of beacon: %ld bytes\n", sizeof(beacon));

  b.bits.flag_init = 0x7E;
  b.bits.mac[0] = 0x01;
  b.bits.mac[1] = 0x02;
  b.bits.mac[2] = 0x03;
  b.bits.mac[3] = 0x04;
  b.bits.mac[4] = 0x05;
  b.bits.mac[5] = 0x06;
  b.bits.mac[6] = 0x07;
  b.bits.mac[7] = 0x08;
  b.bits.sensorId = 0x09;
  b.bits.total[0] = 0x0A;
  b.bits.total[1] = 0x0B;
  b.bits.total[2] = 0x0C;
  b.bits.total[3] = 0x0D;
  b.bits.total_CW[0] = 0x0E;
  b.bits.total_CW[1] = 0x0F;
  b.bits.total_CW[2] = 0x10;
  b.bits.total_CW[3] = 0x11;
  b.bits.total_CCW[0] = 0x12;
  b.bits.total_CCW[1] = 0x13;
  b.bits.total_CCW[2] = 0x14;
  b.bits.total_CCW[3] = 0x15;
  b.bits.dir = 0x16;
  b.bits.flag_end = 0x7E;

  printf("Address of b.raw address in hex format: 0x%x\n", b.raw);

  // Print the entire sequence of bytes
  printf("Bytes in beacon:\n");
  for (int i = 0; i < sizeof(b.raw); i++)
  {
    printf("%02X ", b.raw[i]);
  }
  printf("\n");

  return 0;
}
