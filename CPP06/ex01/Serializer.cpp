#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::~Serializer() {}

Serializer& Serializer::operator=(const Serializer& obj) {
  (void)obj;
  return (*this);
}

uintptr_t Serializer::serialize(data_t* ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
}

data_t* Serializer::deserialize(uintptr_t raw) {
  return reinterpret_cast<data_t*>(raw);
}

Serializer::Serializer(Serializer const& obj) { *this = obj; }
