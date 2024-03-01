#ifndef PERSON_HPP
#define PERSON_HPP

class Person
{
public:
  Person(char father[50]);

  char* get_father();

private:
  char* father;
};

#endif