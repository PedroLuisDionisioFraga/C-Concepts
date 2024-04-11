#include <iostream>
#include <memory>

#include "class_example.cpp"


int main()
{
  std::weak_ptr<Entity> weak_entity;
  {
    std::shared_ptr<Entity> shared_entity = std::make_shared<Entity>();
    weak_entity = shared_entity;
    auto locked_entity = weak_entity.lock(); // Create a shared_ptr from weak_ptr
    if (locked_entity)
      locked_entity->print();

  }

  std::cout << "shared_entity goes out of scope here and Entity is destroyed" << std::endl;

  std::shared_ptr<Entity> locked_entity = weak_entity.lock(); // Try to create a shared_ptr from weak_ptr
  if (locked_entity)
  {
    std::cout << "Entity is still alive!\n";
    locked_entity->print();
  }
  else
  {
    std::cout << "Entity has been destroyed!\n";
  }

  return 0;
}