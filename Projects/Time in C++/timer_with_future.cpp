#include <iostream>
#include <future>
#include <chrono>
#include <thread>
#include <functional>

using namespace std::chrono_literals;

template <class _Rep, class _Period>
std::future<void> timer_async(std::chrono::duration<_Rep, _Period> duration, std::function<void()> callback)
{
  return std::async(std::launch::async, [duration, callback]()
  {
    std::this_thread::sleep_for(duration);
    callback();
  });
}

int main()
{
  std::cout << "Starting Code" << std::endl;

  auto future = timer_async(1min, []()
  {
    std::cout << "Timer has finished" << std::endl;
  });

  auto start = std::chrono::steady_clock::now();

  while (true)
  {
    // Processing main thread queue here
    
    // Optionally terminate the program when timer is complete
    auto status = future.wait_for(0ms);
    if (status == std::future_status::ready)
    {
      auto end = std::chrono::steady_clock::now();
      std::cout << "Time of difference: " << (end - start).count() << " nano seconds" << std::endl;
      break;
    }
    std::this_thread::sleep_for(100ms);  // Work simulation
  }


  return 0;
}
