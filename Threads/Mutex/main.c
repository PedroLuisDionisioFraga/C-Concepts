#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NUM_THREADS 2
#define INCREMENTS_PER_THREAD 10

int counter = 0;
pthread_mutex_t counter_mutex;

void *increment_counter(void *arg)
{
  int *thread_id = (int *)arg;

  printf("Thread %d starting\n", *thread_id);
  for (int i = 0; i < INCREMENTS_PER_THREAD; ++i)
  {
    printf("Thread %d incrementing counter\n", *thread_id);
    pthread_mutex_lock(&counter_mutex);
    printf("Thread %d sees counter value: %d\n", *thread_id, counter);
    counter++;
    pthread_mutex_unlock(&counter_mutex);
    printf("Thread %d incremented counter to: %d\n", *thread_id, counter);
    sleep(1);
  }
  return NULL;
}

int main()
{
  pthread_t threads[NUM_THREADS];
  int *thread_ids[NUM_THREADS];
  pthread_mutex_init(&counter_mutex, NULL);

  // Create threads
  for (int i = 0; i < NUM_THREADS; ++i)
  {
    thread_ids[i] = malloc(sizeof(int));
    if (thread_ids[i] == NULL)
    {
      perror("Failed to allocate memory");
      exit(1);
    }
    *thread_ids[i] = i + 1;
    if (pthread_create(&threads[i], NULL, increment_counter, thread_ids[i]) != 0)
    {
      perror("Failed to create thread");
      exit(1);
    }
  }

  // Join threads
  for (int i = 0; i < NUM_THREADS; ++i)
  {
    pthread_join(threads[i], NULL);
  }

  printf("Final counter value: %d\n", counter); // Should be 400000
  pthread_mutex_destroy(&counter_mutex);
  return 0;
}
