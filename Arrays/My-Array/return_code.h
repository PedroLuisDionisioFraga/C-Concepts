/**
 * @file return_code.h
 * @author Pedro Luis Dionísio Fraga (pedrodfraga@hotmail.com)
 * @brief Return codes for the Array class.
 * @note `ERR` error codes, `WAR` warning codes, `OK` success code.
 * @version 0.1
 * @date 2024-06-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */

typedef enum
{
  OK,
  ERR_INDEX_OUT_OF_BOUNDS,
  ERR_ARRAY_FULL,
  ERR_VALUE_NOT_FOUND,
  WAR_VALUES_WERE_LOST,
} return_code_t;
