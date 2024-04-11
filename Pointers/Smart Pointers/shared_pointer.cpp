#include "class_example.cpp"

int main()
{
  //* shared_ptr example
  {
    std::shared_ptr<Entity> shared_entity_1 = std::make_shared<Entity>();
    {
      std::shared_ptr<Entity> shared_entity_2 = std::make_shared<Entity>();
      shared_entity_2->print();
      std::shared_ptr<Entity> shared_entity_3 = shared_entity_1;
      shared_entity_3->print();
    }
    shared_entity_1->print();
  }

  std::cout << "Entity is destroyed here when last shared_ptr (sharedEntity1) goes out of scope" << std::endl;
  return 0;
}
