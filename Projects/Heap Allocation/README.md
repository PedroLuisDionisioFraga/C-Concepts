# Heap Allocation in C

## Memory Block Structure
The data size is declared when `uint32_t` but can be changed based on the data size needed.\
Why `char data[]` and not `char *data`?\
When you allocate memory for a MemoryBlock, the data array takes up the rest of the memory block after the other struct members.\
If you change it to `char *data`, data becomes a pointer to a char. This means that when you allocate a MemoryBlock, you're only allocating memory for the struct members and the pointer itself, not the memory that the pointer will point to.

### Array (char a[]) vs Pointers (char *a)
Use with reference this code:
```c
char a[] = "Hello";
char *b = "Hello";
```
In the case of `char a[]`, the compiler puts the array in the **stack** until the `char *b` the compiler puts the string in the **data segment** and the pointer in the **stack**.

## A Pointer to a Pointer (Double Pointer)
It store the address of another pointer.\
This concept is useful in various scenarios, such as dynamic memory allocation, passing pointers to functions, and managing arrays of pointers.\
Example:
```c
int value = 10;
int *p1 = &value;  // p1 points to value
int **p2 = &p1;    // p2 points to p1
```
- `*p2` gives the value of p1 (i.e., the address of value).
- `**p2` gives the value of value.