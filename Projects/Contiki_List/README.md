# List Linked

## Overview
This project is a simple example of how to use linked lists.\
It uses structs to create a list of elements, each element has a value and a pointer to the next element.\

## How to Use
To use this library, your struct must have a pointer to the next element at the top, like in `name_t` and not `coordinate_t`, this is necessary because the library casts the `item` parameter to `(struct list *)`, which expects a pointer to the next element at the top.

### Initialization
The macro `LIST` requires a name of struct to be used as the list and it create two variables:\
- `static void *name_used_list` to be used as the list itself to create the next variable.
- `static void **name_used` that receive the address of the variable created above and it going to use to list library.
**NOTE**: The `list_t` macro is `void **`.

### Usage
You must be used the `name_used` created previously to use the library.\

## Reference
- [Contiki documentation](https://docs.contiki-ng.org/en/master/_api/group__list.htmlhttps://docs.contiki-ng.org/en/master/_api/group__list.html)
