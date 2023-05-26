#include <stdint.h>

#include <iomanip>
#include <iostream>
#include <string>

#include "Data.h"
#include "Serializer.hpp"

int main(void) {
  data_t data;
  data.nb = 42;
  data.str = "Hello World";
  std::cout << "data in obj:\t\t\t" << data << std::endl;
  uintptr_t uintptr = Serializer::serialize(&data);
  std::cout << "uintptr:\t\t\t" << uintptr << std::endl;
  std::cout << "uintptr as hex:\t\t\t" << std::hex << uintptr << std::dec
            << std::endl;
  std::cout << "address of obj:\t\t\t" << &data << std::endl;
  data_t *data_ptr = Serializer::deserialize(uintptr);
  std::cout << "data of obj through ptr:\t" << *data_ptr << std::endl;
  std::cout << "now changing data through pointer" << std::endl;
  data_ptr->nb = 69;
  data_ptr->str = "Goodbye World";
  std::cout << "data of obj through ptr:\t" << *data_ptr << std::endl;
  std::cout << "data in obj:\t\t\t" << data << std::endl;

  return (0);
}