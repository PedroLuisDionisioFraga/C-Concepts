/**
 * @file file_io.cpp
 * @author Pedro Luis Dionísio Fraga (pedrodfraga@hotmail.com)
 * @brief File I/O in C++ using fstream
 * @version 0.1
 * @date 2024-06-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
  std::ifstream inputFile("in.txt");
  // `std::ios::app` is used to append to the file instead of overwriting it.
  std::ofstream outputFile = std::ofstream("out.txt", std::ios::app);

  if (!inputFile)
  {
    std::cerr << "Failed to open in.txt for reading." << std::endl;
    return 1;
  }

  if (!outputFile)
  {
    std::cerr << "Failed to open out.txt for writing." << std::endl;
    return 1;
  }

  std::vector<std::string> lines;
  std::string line;

  // Read lines from the input file into the vector.
  while (std::getline(inputFile, line))
    lines.push_back(line);

  // Process the lines in some way. Here we just reverse them.
  for (auto &line : lines)
    std::reverse(line.begin(), line.end());

  // Write the processed lines to the output file.
  for (const std::string &line : lines)
    outputFile << line << std::endl;

  return 0;
}