#ifndef WRAPPER_HPP
#define WRAPPER_HPP

#ifdef __cplusplus
#include "../External Variables in CPP/external_variables_in_c_plus_plus.hpp"

extern "C"
{
#endif

  typedef struct Person Person;

  Person *new_person(char *father);

  char *Person_get_father(Person *person);

  void delete_Person(Person *person);

#ifdef __cplusplus
}
#endif

#endif
