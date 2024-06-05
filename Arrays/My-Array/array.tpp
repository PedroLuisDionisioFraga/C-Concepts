/**
 * @file array.cpp
 * @author Pedro Luis Dionísio Fraga (pedrodfraga@hotmail.com)
 * @brief Array in C++.
 * @version 0.1
 * @date 2024-06-04
 *
 * @copyright Copyright (c) 2024
 *
 */

//#include <iostream>

#include "array.hpp"

template <typename T>
Array<T>::Array(size_t size) : m_size(size), m_array(new T[size])
{
  for (size_t i = 0; i < m_size; i++)
    m_array[i] = '\0';
}

template <typename T>
Array<T>::~Array() { delete[] m_array; }

template <typename T>
return_code_t Array<T>::insert(T value)
{
  for (size_t i = 0; i < m_size; i++)
    if (m_array[i] == '\0')
    {
      m_array[i] = value;
      return OK;
    }

  return ERR_ARRAY_FULL;
}

template <typename T>
return_code_t Array<T>::insert_at(size_t index, T value)
{
  if (index > m_size)
    return ERR_INDEX_OUT_OF_BOUNDS;
  
  m_array[index] = value;
  return OK;
}

template <typename T>
return_code_t Array<T>::remove(size_t index)
{
  if (index > m_size)
    return ERR_INDEX_OUT_OF_BOUNDS;
  
  m_array[index] = '\0';
  return OK;
}

template <typename T>
return_code_t Array<T>::remove_at(size_t index, T value)
{
  if (index > m_size)
    return ERR_INDEX_OUT_OF_BOUNDS;
  
  m_array[index] = value;
  return OK;
}

template <typename T>
T Array<T>::get_at(size_t index) { return m_array[index]; }

template <typename T>
void Array<T>::clear()
{
  for (size_t i = 0; i < m_size; i++)
    m_array[i] = '\0';
}

template <typename T>
void Array<T>::fill(T value)
{
  for (size_t i = 0; i < m_size; i++)
    m_array[i] = value;
}

template <typename T>
size_t Array<T>::find(T value)
{
  for (size_t i = 0; i < m_size; i++)
    if (m_array[i] == value)
      return i;
  
  return -1;
}

template <typename T>
bool Array<T>::is_empty()
{
  for (size_t i = 0; i < m_size; i++)
    if (m_array[i] != '\0')
      return false;
  
  return true;
}

template <typename T>
bool Array<T>::is_full()
{
  for (size_t i = 0; i < m_size; i++)
    if (m_array[i] == '\0')
      return false;
  
  return true;
}

template <typename T>
void Array<T>::m_swap(T *element_1, T *element_2)
{
  T temp = *element_1;
  *element_1 = *element_2;
  *element_2 = temp;
}

template <typename T>
return_code_t Array<T>::swap(size_t index1, size_t index2)
{
  if (index1 > m_size || index2 > m_size)
    return ERR_INDEX_OUT_OF_BOUNDS;
  
  m_swap(&m_array[index1], &m_array[index2]);
  return OK;
}

template <typename T>
return_code_t Array<T>::swap(T element_1, T element_2)
{
  size_t index1 = find(element_1);
  size_t index2 = find(element_2);

  if (index1 == -1 || index2 == -1)
    return ERR_VALUE_NOT_FOUND;
  
  m_swap(&m_array[index1], &m_array[index2]);
  return OK;
}

template <typename T>
void Array<T>::reverse()
{
  for (size_t i = 0; i < m_size / 2; i++)
    m_swap(&m_array[i], &m_array[m_size - i - 1]);
}

template <typename T>
return_code_t Array<T>::resize(size_t new_size)
{
  T *new_array = new T[new_size];
  size_t min_size = std::min<size_t>(m_size, new_size);

  for (size_t i = 0; i < new_size; i++)
    new_array[i] = (i < min_size) ? m_array[i] : '\0';
  
  delete[] m_array;
  m_array = new_array;
  m_size = new_size;

  return (new_size > m_size) ? WAR_VALUES_WERE_LOST : OK;
}

template <typename T>
void Array<T>::print()
{
  for (size_t i = 0; i < m_size; i++)
    std::cout << "Value of `m_array[" << i << "]`: " << m_array[i] << std::endl;
  std::cout << std::endl;
}

template class Array<int>;
