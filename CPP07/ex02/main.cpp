#include <iostream>
#include <stdexcept>
#include <string>

#include "Array.h"

int main2(void) {
  Array<int> array(5);
  Array<int> assign(array);
  Array<int> copy = array;

  array[0] = 1;
  array[1] = 2;
  array[2] = 3;
  array[3] = 4;
  array[4] = 5;
  std::cout << "array: " << array[0] << array[1] << array[2] << array[3]
            << array[4] << std::endl;
  std::cout << "assign: " << assign[0] << assign[1] << assign[2] << assign[3]
            << assign[4] << std::endl;
  std::cout << "copy: " << copy[0] << copy[1] << copy[2] << copy[3] << copy[4]
            << std::endl;
  copy[1] = 4;
  copy[2] = 2;
  std::cout << "copy: " << copy[0] << copy[1] << copy[2] << copy[3] << copy[4]
            << std::endl;
  try {
    array[5];
  } catch (std::exception &) {
    std::cout << "exception array[5]" << std::endl;
  }
  try {
    copy[5];
  } catch (std::exception &) {
    std::cout << "exception copy[5]" << std::endl;
  }
  try {
    assign[5];
  } catch (std::exception &) {
    std::cout << "exception assign[5]" << std::endl;
  }
  return 0;
}

int main(void) {
  main2();
  // system("leaks a.out");
  return 0;
}
