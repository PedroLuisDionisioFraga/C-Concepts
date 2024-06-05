/**
 * @file array.hpp
 * @author Pedro Luis Dionísio Fraga (pedrodfraga@hotmail.com)
 * @brief Array in C++.
 * @version 0.1
 * @date 2024-06-04
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include "return_code.h"

/**
 * @brief Array class that encapsulates a dynamic array with various operations.
 *
 * @tparam T Type of the elements in the array.
 */
template <typename T>
class Array
{
public:
  Array(size_t size);
  ~Array();
  /**
   * @brief Inserts a value at the end of the array.
   *
   * @param value The value to be inserted.
   *
   * @return return_code_t `ARRAY_FULL` if the array is full, `OK` if success.
   */
  return_code_t insert(T value);

  /**
   * @brief Inserts a value at a specific index in the array.
   *
   * @param index The index where the value should be inserted.
   * @param value The value to be inserted.
   *
   * @return return_code_t `INDEX_OUT_OF_BOUNDS` if the index is out of bounds, `OK` if success.
   */
  return_code_t insert_at(size_t index, T value);

  /**
   * @brief Removes the value at a specific index in the array.
   *
   * @param index The index of the value to be removed.
   *
   * @return return_code_t `INDEX_OUT_OF_BOUNDS` if the index is out of bounds, `OK` if success.
   */
  return_code_t remove(size_t index);

  /**
   * @brief Removes a specific value from the array.
   *
   * @param index The index of the value to be removed.
   * @param value The value to be removed.
   *
   * @return return_code_t `INDEX_OUT_OF_BOUNDS` if the index is out of bounds, `OK` if success.
   */
  return_code_t remove_at(size_t index, T value);

  /**
   * @brief Gets the value at a specific index in the array.
   *
   * @param index The index of the value to get.
   *
   * @return T The value at the specified index.
   */
  T get_at(size_t index);

  /**
   * @brief Clears the array, setting all elements to their default value.
   */
  void clear();

  /**
   * @brief Fills the array with a specific value.
   *
   * @param value The value to fill the array with.
   */
  void fill(T value);

  /**
   * @brief Finds the first occurrence of a specific value in the array.
   *
   * @param value The value to find.
   *
   * @return size_t The `index` of the first occurrence of the value, or `NULL` if the value is not found.
   */
  size_t find(T value);

  /**
   * @brief Checks if the array is empty.
   *
   * @return bool True if the array is empty, false otherwise.
   */
  bool is_empty();

  /**
   * @brief Checks if the array is full.
   *
   * @return bool True if the array is full, false otherwise.
   */
  bool is_full();

  /**
   * @brief Swaps the values at two specific indices in the array.
   *
   * @param index1 The index of the first value to swap.
   * @param index2 The index of the second value to swap.
   *
   * @return return_code_t `INDEX_OUT_OF_BOUNDS` if one of the indices is out of bounds, `OK` if success.
   */
  return_code_t swap(size_t index1, size_t index2);

  /**
   * @brief Swaps two specific values in the array.
   *
   * @param element_1 The first value to swap.
   * @param element_2 The second value to swap.
   *
   * @return return_code_t `VALUE_NOT_FOUND` if one of the values is not found a respective index, `OK` if success.
   */
  return_code_t swap(T element_1, T element_2);

  /**
   * @brief Reverses the order of the elements in the array.
   *
   * @return return_code_t Status code of the operation.
   */
  void reverse();

  /**
   * @brief If the new size is larger, the new elements are initialized to their default value. If the new size is smaller, the excess elements are discarded.
   *
   * @param new_size
   *
   * @return return_code_t
   */
  return_code_t resize(size_t new_size);

  /**
   * @brief Prints the contents of the array.
   */
  void print();

  size_t size() { return this->m_size; }

private:
  T *m_array;
  size_t m_size;
  void m_swap(T *element_1, T *element_2);
};

#include "array.tpp"

#endif // ARRAY_HPP_
