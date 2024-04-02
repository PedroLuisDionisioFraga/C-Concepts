/**
 * @file oop_with_c++.cpp
 * @brief Virtual is used to enable polymorphism, allowing the derived class's method to be called through a pointer to the base class.
 */

#include "oop_with_c++.h"

// Constructor
Base::Base()
{
  cout << "Base constructor called\r\n";
}

// Destructor
Base::~Base()
{
  cout << "Base destructor called\r\n";
}

// Method
void Base::foo()
{
  cout << "Base::foo() called\r\n";
}

// Calling the Base class constructor in the Derived class constructor
Derived::Derived() : Base()
{
  cout << "Derived constructor called\r\n";
}

Derived::~Derived()
{
  cout << "Derived destructor called\r\n";
}

void Derived::foo()
{
  cout << "Derived::foo() called\r\n";
  cout << "Calling Base::foo() from Derived::foo() ....\r\n";
  Base::foo();
}

// Method Overload
void Derived::bar(int x)
{
  cout << "Derived::foo(int x) called with x = " << x << "\r\n";
}

void Derived::bar(const string &str)
{
  cout << "Derived::foo(const string& str) called with str = " << str << "\r\n";
}

int main()
{
  // Example of using 'virtual'
  Base *ptr = new Derived();
  ptr->foo(); // Calls Derived::foo() because of dynamic dispatch

  // Example of using 'overload'
  Derived *derived = new Derived();
  derived->bar(5); // Calls Derived::bar(int x)
  derived->bar("Hello"); // Calls Derived::bar(const string& str)

  delete ptr, derived; // Don't forget to delete the pointer to prevent memory leak
  return 0;
}