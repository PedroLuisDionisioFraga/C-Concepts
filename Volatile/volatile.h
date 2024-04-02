/**
 * @file volatile.h
 * @date 2024-03-26
 * @brief The volatile keyword in C and C++ is used to indicate that a variable's value may change unexpectedly, such as by hardware or concurrently executing code.
 * In resume, `volatile` tells the compiler not to optimize anything that has to do with the volatile variable, for example cache accesses.
 * 
 * 
 * Another use for volatile is signal handlers. If you have code like this:
 * ```c
 *  int quit = 0;
 *  while (!quit)
 *  {
 *    very small loop which is completely visible to the compiler
 *  }
 * ```
 * The compiler is allowed to notice the loop body does not touch the quit variable and convert the loop to a while (true) loop. Even if the quit variable is set on the signal handler for SIGINT and SIGTERM; the compiler has no way to know that.
 * However, if the quit variable is declared volatile, the compiler is forced to load it every time, because it can be modified elsewhere. This is exactly what you want in this situation.
 */

#ifndef VOLATILE_H
#define VOLATILE_H

#include <iostream>
#include <time.h>

extern volatile bool task_running;

/**
 * @brief Delays the execution for a specified number of seconds.
 *
 * This function pauses the execution of the program for the specified number of seconds.
 * The delay is achieved by continuously checking the current time until the required time is reached.
 *
 * @param seconds The number of seconds to delay the execution.
 */
void delay(float seconds);

/**
 * @brief Checks if a randomly generated number is 1.
 * @details The function seeds the random number generator with the current time,
 * generates a random number between 0 and 9, and checks if the number is 1.
 * This gives a 10% chance of returning true.
 * @return True if the random number is 1, false otherwise.
 */
bool has_ten_percent_chance();

#endif // VOLATILE_H