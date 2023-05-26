#ifndef SERIALIZER_HPP_
#define SERIALIZER_HPP_

#include <stdint.h>

#include "Data.h"

class Serializer {
 private:
  Serializer();
  ~Serializer();
  Serializer(Serializer const& obj);
  Serializer& operator=(const Serializer& obj);

 public:
  static uintptr_t serialize(data_t* ptr);
  static data_t* deserialize(uintptr_t raw);
};

#endif