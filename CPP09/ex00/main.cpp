
#include <iostream>
#include <stdexcept>

#include "BitcoinExchange.hpp"
#include "HandleInput.hpp"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Error: please specify exactly one input file" << std::endl;
    return 1;
  }
  try {
    BitcoinExchange data("data.csv");
    // database.printDatabase();
    // std::cout << database.searchValue(20101010) << std::endl;
    HandleInput(argv[1], data);
  } catch (std::exception &e) {
    std::cout << "Error: " << e.what() << std::endl;
    return 1;
  }
  return 0;
}
