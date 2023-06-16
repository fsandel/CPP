#include <iostream>

#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
  try {
    PmergeMe merge(argc, argv);
    merge.sort();
    merge.printLog();
  } catch (std::exception &e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
  return 0;
}