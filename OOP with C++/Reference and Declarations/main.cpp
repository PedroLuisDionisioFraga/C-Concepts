/**
 * @file main.cpp
 * @author Pedro Luis Dionísio Fraga (pedrodfraga@hotmail.com)
 * @brief A simple program to demonstrate the use of references and declarations in C++ based on this issue: https://stackoverflow.com/questions/56705602/declare-object-without-calling-default-constructor
 * @version 0.1
 * @date 2024-09-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "a.hpp"

int main(int argc, char const *argv[])
{
  std::cout << "Creating a new A object" << std::endl;
  A a;

  std::cout << "Creating a new A reference" << std::endl;
  A *p_a;
  // delete p_a;  // This will cause a segmentation fault because p_a is not initialized

  std::cout << "Instancing to a new A object and assignment of its address to p_a" << std::endl;
  p_a = new A();
  delete p_a;

  return 0;
}
