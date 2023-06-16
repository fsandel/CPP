#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN & obj) { *this = obj; }

RPN& RPN::operator=(const RPN& obj) {
  (void)obj;
  return *this;
}
