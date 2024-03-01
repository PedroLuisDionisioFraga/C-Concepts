#include "c_to_cpp.h"

extern "C"
{
  Person *new_person(char *father)
  {
    return new Person(father);
  }

  char *Person_get_father(Person *person)
  {
    return person->get_father();
  }

  void delete_Person(Person *person)
  {
    delete person;
  }
}