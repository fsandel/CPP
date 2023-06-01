#include <iostream>
#include <string>
#include <stdexcept>

#include "Array.hpp"

int main(void) {
  Array<int> array(5);
  array[0] = 1;
  array[1] = 2;
  array[2] = 3;
  array[3] = 4;
  array[4] = 5;
  std::cout << array[0] << array[1] << array[2] << array[3] << array[4] << std::endl;
  try {
  array[5];}
  catch(std::exception &){
    std::cout << "exception" << std::endl;
  }
  return 0;
}