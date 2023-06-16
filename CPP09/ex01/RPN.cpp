#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& obj) { *this = obj; }

RPN& RPN::operator=(const RPN& obj) {
  this->nbrs_ = obj.nbrs_;
  return *this;
}

RPN::RPN(std::string str_represenation) {
  if (is_valid_rpn_string(str_represenation))
    std::cout << "valid" << std::endl;
  else
    std::cout << "you f'd up" << std::endl;
}
