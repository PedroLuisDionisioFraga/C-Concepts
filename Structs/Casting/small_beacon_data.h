/**
 * @file small_beacon_data.h
 * @author Pedro Luis Dionísio Fraga (pedrodfraga@hotmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SMALL_BEACON_DATA_H
#define SMALL_BEACON_DATA_H

#include <stdint.h>

struct small_data_t
{
  uint8_t flag_init; // Byte 0
  uint8_t mac[4];    // Bytes 1 to 4
  uint8_t sensorId;  // Byte 5
  uint8_t total[2];  // Bytes 6 to 7
};

#endif // SMALL_BEACON_DATA_H
