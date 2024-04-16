#include <iostream>

template <typename T>
class Array
{
private:
  T *ptr;
  int size;

public:
  Array(T arr[], int s)
  {
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
      ptr[i] = arr[i];
  }
  void print()
  {
    for (int i = 0; i < size; i++)
      std::cout << " " << *(ptr + i);
    std::cout << std::endl;
  }
};

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  Array<int> a = Array<int>(arr, 5);
  a.print();

  char arr2[5] = {'a', 'b', 'c', 'd', 'e'};
  Array<char> b = Array<char>(arr2, 5);
  b.print();

  return 0;
}