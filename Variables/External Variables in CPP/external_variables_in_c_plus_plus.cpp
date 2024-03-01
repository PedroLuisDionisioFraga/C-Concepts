#include "external_variables_in_c_plus_plus.hpp"

Person::Person(char father[50])
{
  this->father = father;
}

char* Person::get_father()
{
  return this->father;
}
