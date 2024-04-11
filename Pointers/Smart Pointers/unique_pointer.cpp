#include "class_example.cpp"

int main()
{
  {
    std::unique_ptr<Entity> entity = std::make_unique<Entity>();
    entity->print();
  }

  std::cout << "Entity is destroyed here when unique_ptr goes out of scope" << std::endl;
  return 0;
}
