#include <stdlib.h>
#include <time.h>

#include "volatile.h"

volatile bool task_running = true;

void delay(float seconds)
{
  float milli_seconds = 1000 * seconds;

  clock_t start_time = clock();

  while (clock() < start_time + milli_seconds)
    ;
}

bool has_ten_percent_chance()
{
  srand(time(nullptr));  // seed the random number generator

  int random_number = rand() % 10;

  return random_number == 1;
}

int main()
{
  do
  {
    bool task_finished = has_ten_percent_chance();
    if (task_finished)
    {
      task_running = false;
    }
    {
      printf("Task is running...\n");
      delay(0.5);
    }
  } while (task_running);
  printf("Task is done.\n");

  return 0;
}
