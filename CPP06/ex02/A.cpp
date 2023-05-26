#include "A.hpp"

A::A() { this->type_ = "A"; }

A::~A() {}

A& A::operator=(const A& obj) {
  (void)obj;
  return (*this);
}

A::A(A const& obj):Base(obj) { *this = obj; }
