#include <iostream>
#include <cstdint>

int main()
{
  // Stack allocation
  int array_stack_alloc[6] = {1, 2, 3, 4, 5, 6};
  uint8_t size;

  size = sizeof(array_stack_alloc) / sizeof(array_stack_alloc[0]);
  for (size_t i = 0; i < size; i++)
    std::cout << "Value of `array_stack_alloc[" << i << "]`: " << array_stack_alloc[i] << std::endl;
  std::cout << std::endl;

  // Heap allocation
  int *array_heap_alloc = new int[size]{1, 2, 3, 4, 5, 6};

  for (size_t i = 0; i < size; i++)
    std::cout << "Value of `array_heap_alloc[" << i << "]`: " << array_heap_alloc[i] << std::endl;
  std::cout << std::endl;

  std::cout << "Address of the array_stack_alloc: " << array_stack_alloc << std::endl;
  std::cout << "Size of the array_stack_alloc, size of entire array: " << sizeof(array_stack_alloc) << " bytes" << std::endl;
  std::cout << "Value of `array_stack_alloc`: " << *array_stack_alloc << std::endl
            << std::endl;

  std::cout << "Address of the array_heap_alloc: " << array_heap_alloc << std::endl;
  std::cout << "Size of the array_heap_alloc, size of pointer: " << sizeof(array_heap_alloc) << " bytes" << std::endl;
  std::cout << "Value of `array_heap_alloc`: " << *array_heap_alloc << std::endl;

  delete array_heap_alloc;
  return 0;
}
