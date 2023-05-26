#include "C.hpp"

C::C() { this->type_ = "C"; }

C::~C() {}

C& C::operator=(const C& obj) {
  (void)obj;
  return (*this);
}

C::C(C const& obj):Base(obj) { *this = obj; }
