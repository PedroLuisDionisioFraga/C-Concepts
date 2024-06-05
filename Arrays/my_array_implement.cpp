/**
 * @file my_array_implement.cpp
 * @author Pedro Luis Dionísio Fraga (pedrodfraga@hotmail.com)
 * @brief Test of my Array class
 * @version 0.1
 * @date 2024-06-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>

#include "My-Array/array.hpp"

int main()
{
  Array<int> array(5);

  std::cout << "Inserting values..." << std::endl;
  array.insert(87);
  array.insert(23);
  array.insert(45);
  array.print();

  std::cout << "Swapping by index..." << std::endl;
  array.swap(0, 2);
  array.print();

  std::cout << "Swapping by value..." << std::endl;
  array.swap(87, 45);
  array.print();

  std::cout << "Insert by index and value..." << std::endl;
  array.insert_at(1, 99);
  array.print();

  std::cout << "Removing by value..." << std::endl;
  array.remove(99);
  array.print();

  std::cout << "Removing by index..." << std::endl;
  array.remove(2);
  array.print();

  // Get the value at a specific index
  std::cout << "Value at index 1: " << array.get_at(1) << std::endl << std::endl;

  std::cout << "Clean array" << std::endl;
  array.clear();
  array.print();

  // Is empty
  std::cout << "Is empty?: R-  " << (array.is_empty() ? "Yes" : "No") << std::endl << std::endl;

  std::cout << "Fill array with 99" << std::endl;
  array.fill(99);
  array.print();

  // Is full
  std::cout << "Is full?: R-  " << (array.is_full() ? "Yes" : "No") << std::endl << std::endl;

  std::cout << "Reverse array" << std::endl;
  array.reverse();
  array.print();

  std::cout << "Resize array" << std::endl;
  array.resize(10);
  array.print();

  std::cout << "Inserting more values..." << std::endl;
  array.insert(554);
  array.insert(745269);
  array.insert(40);
  array.print();


  return 0;
}
