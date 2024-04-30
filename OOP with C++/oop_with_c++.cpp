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
  // Creating a new instance of Derived (new Derived()) and assigning it to a pointer of type Base (Base *)
  // This means that the actual type of the object (in this case, Derived) is used to determine which destructor to call, not the type of the pointer (Base*). So when you delete ptr, the Derived destructor will be called first, followed by the Base destructor, ensuring that all resources are properly cleaned up.
  Base *ptr = new Derived();
  printf("1 --------------------\r\n");

  ptr->foo(); // Calls Derived::foo() because of dynamic dispatch
  printf("2 --------------------\r\n");

  // Example of using 'overload'
  Derived *derived = new Derived();
  printf("3 --------------------\r\n");

  derived->bar(5); // Calls Derived::bar(int x)
  derived->bar("Hello"); // Calls Derived::bar(const string& str)

  printf("4 --------------------\r\n");
  delete ptr; // Don't forget to delete the pointer to prevent memory leak
  return 0;
}