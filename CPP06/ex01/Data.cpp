#include "Data.h"

#include <iostream>
#include <string>

std::ostream &operator<<(std::ostream &os, const data_t &obj) {
  os << "nb: " << obj.nb << ", str: " << obj.str;
  return (os);
}
