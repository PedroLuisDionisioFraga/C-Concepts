#include "External Variables in CPP/external_variables_in_c_plus_plus.hpp"

extern "C" void user_say_hello_to_dad();

User user = User("John");

void user_say_hello_to_dad()
{
  user.say_hello_to_dad();
}
