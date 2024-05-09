/**
 * @file oop_with_c++.h
 * @date 2024-03-26
 * @brief This file contains the Base and Derived classes used to demonstrate the use of the 'virtual' keyword in C++.
 *
 ** Public Inheritance (class Derived : public Base):
 *  Public members of the base class become public members of the derived class.
 *  Protected members of the base class become protected members of the derived class.
 *  Private members of the base class are not accessible directly from the derived class, but can be accessed through calls to the public and protected member functions of the base class.
 ** Protected Inheritance (class Derived : protected Base):
 *  Public members of the base class become protected members of the derived class.
 *  Protected members of the base class become protected members of the derived class.
 *  Private members of the base class are not accessible directly from the derived class.
 ** Private Inheritance (class Derived : private Base):
 *  Public members of the base class become private members of the derived class.
 *  Protected members of the base class become private members of the derived class.
 *  Private members of the base class are not accessible from the derived class.
 */

#ifndef OOP_WITH_C_H
#define OOP_WITH_C_H

#include <iostream>

using std::cout;
using std::string;

/**
 * @brief The Base class contains a virtual function 'foo'.
 */
class Base
{
public:
  /**
   * @brief Constructor for the Base class.
   */
  Base();

  /**
   * @brief Destructor for the Base class.
   *
   * @note The destructor is declared as `virtual` to ensure that the derived class's destructor is called when deleting a pointer to the base class.
   * you don't explicitly call the destructor for an object. The destructor is automatically called when an object goes out of scope or when delete is used on a pointer to an object.
   * If you don't call delete on ptr, then the destructors won't be called, and you'll have a memory leak because the memory allocated for the Derived object won't be freed.
   */
  virtual ~Base();

  /**
   * @brief Virtual function 'foo'.
   */
  virtual void foo();
};

/**
 * @brief The Derived class inherits from the Base class and overrides the 'foo' function.
 */
class Derived : public Base
{
public:
public:
  /**
   * @brief Constructor for the Derived class.
   */
  Derived();

  /**
   * @brief Destructor for the Derived class.
   */
  ~Derived();

  /**
   * @brief Overrides the 'foo' function in the Base class.
   */
  void foo() override;

  /**
   * @brief Overloaded 'foo' function that takes an integer.
   */
  void bar(int x);

  /**
   * @brief Overloaded 'foo' function that takes a string.
   *
   * @note The 'const' keyword is used to indicate that the string parameter is constant and cannot be modified.
   * When you pass an argument by reference, the function can modify the argument. If you don't want the function to be able to modify the argument, you can add the const keyword to the argument declaration.
   */
  void bar(const string &str);
};

/**
 * @brief The FinalDerived class inherits from the Derived class and overrides the 'foo' function.
 *
 * @note The 'final' keyword is used to prevent the class from being inherited by other classes.
 *  
 */
class FinalDerived final : public Derived
{
public:
  void foo() override;
  // Can't override bar because it's final in Derived
};

#endif // OOP_WITH_C_H