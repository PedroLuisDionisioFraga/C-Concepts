#include <iostream>
#include <stdint.h>

class A
{
public:
  A();
  ~A();

  void do_something();

private:
  static int id;
  int m_id;
};
