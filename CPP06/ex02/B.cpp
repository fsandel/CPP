#include "B.hpp"

B::B() { this->type_ = "B"; }

B::~B() {}

B& B::operator=(const B& obj) {
  (void)obj;
  return (*this);
}

B::B(B const& obj):Base(obj) { *this = obj; }
