#include <iostream>

class Person
{
public:
  char *name;

  Person() : age(20), name((char *)"Pedro"), cpf((char *)"123456789") {}

  void modify_name(const char *new_name)
  {
    name = (char *)new_name;
  }

private:
  int age;

  char *cpf;
  // friend function
  friend int modify_name_and_get_age(Person p);
};

// friend function definition
int modify_name_and_get_age(Person p)
{
  p.modify_name("Luis");

  std::cout << "The CPF is " << p.cpf << std::endl;
  std::cout << "The name is " << p.name << std::endl;

  return p.age;
}

int main()
{
  Person p;

  std::cout << "The age is " << modify_name_and_get_age(p) << std::endl;

  return 0;
}