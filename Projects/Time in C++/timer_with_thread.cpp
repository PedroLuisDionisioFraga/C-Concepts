/**
 *
 * @note: This code uses the MinGW64 with POSIX Threads
*/

#include <iostream>
#include <thread>
#include <chrono>

int main()
{
  std::cout << "Starting Code...." << std::endl;

  std::thread timer([]() {
    std::chrono::minutes time_sleep = std::chrono::minutes(1);
    std::this_thread::sleep_for(time_sleep);

    // Call the function to be executed after the time has passed

    std::cout << "Timer Finish!" << std::endl;
  });

  std::cout << "Thread Begin!" << std::endl;

  auto start = std::chrono::steady_clock::now();
  timer.join();
  auto end = std::chrono::steady_clock::now();

  std::cout << "Time of difference: " << (end - start).count() << " nano seconds" << std::endl;

  return 0;
}
