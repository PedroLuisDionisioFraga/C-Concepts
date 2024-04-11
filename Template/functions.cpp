#include <iostream>

template <typename T>
T max(T a, T b)
{
  return (a > b) ? a : b;
}

int main()
{
  int i = max(3, 7);
  double d = max(6.34, 18.523);
  char ch = max('a', 'k');

  std::cout << "i: " << i << ", d: " << d << ", ch: " << ch << std::endl;

  return 0;
}