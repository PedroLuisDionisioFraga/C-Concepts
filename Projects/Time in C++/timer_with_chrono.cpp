/**
 *
 * @note: This code uses the MinGW64 with POSIX Threads
 */

#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

int main()
{
  std::cout << "Starting Code...." << std::endl;

  auto start = std::chrono::steady_clock::now();
  bool time_running = true;

  std::cout << "Timer Started!" << std::endl;

  // In this case the CPU will be used 100% of the time because it is calculating the time difference in a loop every 100ms
  while (true)
  {
    if (time_running)
    {
      auto now = std::chrono::steady_clock::now();
      auto diff = now - start;
      if (std::chrono::duration_cast<std::chrono::seconds>(diff) >= 1min)
      {
        time_running = false;
        std::cout << "Timer Finish!" << std::endl;
        std::cout << "Time of difference: " << diff.count() << " nano seconds" << std::endl;
        break;
      }
    }

    std::this_thread::sleep_for(100ms);
  }

  return 0;
}
