#include <iostream>
#include <string>

#include "iter.hpp"

void make_big(std::string &str) {
  for (std::size_t i = 0; i < str.length(); i++) {
    str.at(i) = std::toupper(str.at(i));
  }
}

void print_string(std::string &str) { std::cout << str << std::endl; }

int main(void) {
  std::string array[4] = {"first", "second", "third", "goodbye"};
  ::iter(array, 4, make_big);
  ::iter(array, 4, print_string);
  return 0;
}
