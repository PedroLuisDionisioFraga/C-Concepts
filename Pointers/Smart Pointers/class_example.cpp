#include <iostream>
#include <memory>

class Entity
{
public:
  Entity()
  {
    m_id = ++id;
    std::cout << "Created Entity " << m_id << std::endl;
  }

  ~Entity()
  {
    std::cout << "Destroyed Entity " << m_id << std::endl;
    std::cout << "-------------------" << std::endl;
  }

  void print()
  {
    std::cout << "Printing Entity " << m_id << std::endl;
  }

private:
  static int id;
  int m_id;
};

// Define the static member
int Entity::id = 0;