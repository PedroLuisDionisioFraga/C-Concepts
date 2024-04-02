#include <iostream>

using std::cout;
using std::endl;

// Pass by value
void passByValue(int value)
{
  cout << "Updated `value` by value, locally" << endl;
  value = 10;
}

// Pass by pointer (C style)
void passByPointer(int *value)
{
  cout << "Updated `value` by pointer" << endl;
  // Unreference the pointer to change the value at the address
  *value = 20;
}

// Pass by reference (C++), receive the address of the variable
void passByReference(int &value)
{
  cout << "Updated `value` by reference" << endl;
  value = 30;
}

// Pass const reference (C++)
// The const keyword is used to make sure the value, passed by reference, will  not changed
void passByConstReference(const int &value)
{
  cout << "Updated `value` by const reference" << endl;
  const int *ptr = &value;
  // value = 40; // This would be an error
  cout << "In passByConstReference: " << value << endl;
}

// Pass const pointer to const value, this function takes a constant pointer to a constant integer.
void passConstPointerToConst(const int *const value)
{
  cout << "Updated `value` by const pointer to const" << endl;
  // *value = 50;  // This would be an error
  cout << "In passConstPointerToConst (*value): " << *value << endl;

  const int *const *nonConstValue = &value;
  // value = nonConstValue;  // This would be an error
  cout << "In passConstPointerToConst (*nonConstValue): " << *nonConstValue << endl;
}

// Pass array (C style)
void passArray(int arr[], int size)
{
  cout << "Updated `arr` by array" << endl;
  for (int i = 0; i < size; i++)
  {
    arr[i] = i;
  }
}

int main()
{
  int value = 5;

  cout << "Before passByValue: " << value << endl;
  passByValue(value);
  cout << "After passByValue: " << value << endl;

  cout << "-------------------" << endl;

  cout << "Before passByPointer: " << value << endl;
  passByPointer(&value);
  cout << "After passByPointer: " << value << endl;

  cout << "-------------------" << endl;

  cout << "Before passByReference: " << value << endl;
  passByReference(value);
  cout << "After passByReference: " << value << endl;

  cout << "-------------------" << endl;

  cout << "Before passConstPointerToConst: " << value << endl;
  passConstPointerToConst(&value);
  cout << "After passConstPointerToConst: " << value << endl;

  cout << "-------------------" << endl;

  cout << "Before passByConstReference: " << value << endl;
  passByConstReference(value);
  cout << "After passByConstReference: " << value << endl;

  cout << "-------------------" << endl;

  int arr[5] = {0};
  passArray(arr, 5);
  cout << "After passArray: ";
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}