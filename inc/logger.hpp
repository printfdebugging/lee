#pragma once

#include <iostream>


// Later on, as I work on it, I plan to add more information like filename
// line number in the file.

#define ERROR(string)                                                          \
  std::cout << "[ERROR] " << string << std::endl;                              \
  std::exit(-1);
