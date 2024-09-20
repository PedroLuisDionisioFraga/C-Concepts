#include "a.hpp"

int A::id = 0;

A::A()
{
  std::cout << "A constructor to " << this->id << " instance" << std::endl;
  this->m_id = A::id;
  A::id += 1;
}

A::~A()
{
  std::cout << "A destructor to " << this->m_id << std::endl;
}

void A::do_something()
{
  std::cout << "A do_something" << std::endl;
}
