/**
 * @file inline.cpp
 *
 * @brief Is used to suggest to the compiler that it should attempt to generate code (inline the function) in such a way that the function's code gets inserted into the place where the function is called, thereby eliminating the function-call overhead. However, it's just a suggestion and the compiler may ignore it.
 *
 * @note The `__inline__` identifier is used in older versions of C and in certain compilers (such as GCC) to specify that a function should be inlined.
 */

#include <iostream>

using std::cout;
using std::endl;

// Inline function
inline int max(int x, int y)
{
  return (x > y) ? x : y;
}

// It will called like a normal function and the compiler may or may not choose to inline it based on its optimization settings and other factors.
int min(int x, int y)
{
  return (x < y) ? x : y;
}

class MyClass
{
public:
  // Inline member function definition
  inline void myMethod()
  {
    cout << "Inside myMethod" << endl;
  }
};

int main()
{
  cout << "Max (10, 20): " << max(10, 20) << endl;
  cout << "Min (10, 20): " << min(10, 20) << endl;

  MyClass obj;
  obj.myMethod(); // Call to inline member function
  return 0;
}