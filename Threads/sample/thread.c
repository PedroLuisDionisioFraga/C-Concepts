#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *entry_point(void *value)
{
  printf("hello from the second thread :)\n");

  int *num = (int *)value;

  for (int i = 0; i < 5; i++)
  {
    printf("[Thread 1] the value of value is %d\n", *num);
    sleep(2); // Sleeps for 0.5 seconds (500,000 microseconds)
  }

  return NULL;
}

void *entry_point2(void *value)
{
  printf("hello from the second thread :)\n");

  int *num = (int *)value;

  for (int i = 0; i < 5; i++)
  {
    printf("[Thread 2] the value of value is %d\n", *num);
    sleep(2); // Sleeps for 0.5 seconds (500,000 microseconds)
  }

  return NULL;
}

int main(int argc, char **argv)
{
  pthread_t thread;
  pthread_t thread2;

  printf("hello from the first thread :D\n");

  int num = 123;

  pthread_create(&thread, NULL, entry_point, &num);
  for (int i = 0; i < 5; i++)
  {
    printf("[MAIN] hello from the first thread :D\n");
    sleep(1);
  }

  printf("hello from the second thread :D\n");
  pthread_create(&thread2, NULL, entry_point2, &num);

  pthread_join(thread2, NULL);

  printf("Exiting main thread.\n");

  return 0;
}
