#include <iostream>

#include "RPN.hpp"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cerr << "Error: 1 Argument required" << std::endl;
    return 1;
  }

  try {
    RPN input(argv[1]);
    std::cout << input.solve() << std::endl;
  } catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }
  return 0;
}