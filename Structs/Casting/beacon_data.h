/**
 * @file beacon_data.h
 * @author Pedro Luis Dionísio Fraga (pedrodfraga@hotmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef BEACON_DATA_H
#define BEACON_DATA_H

#include <stdint.h>

struct beacon_data_t
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
};

#endif // BEACON_DATA_H
