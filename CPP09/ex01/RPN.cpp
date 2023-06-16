#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& obj) { *this = obj; }

RPN& RPN::operator=(const RPN& obj) {
  this->nbrs_ = obj.nbrs_;
  return *this;
}

RPN::RPN(std::string str_represenation) {
  if (!is_valid_rpn_string(str_represenation))
    throw std::invalid_argument("Inupt is not valid");
  this->str_ = str_represenation;
}

int RPN::solve() {
  for (std::string::iterator iter = this->str_.begin(); iter < this->str_.end();
       ++iter)
    if (*iter == ' ')
      continue;
    else if (std::isdigit(*iter))
      this->nbrs_.push(std::atoi(&(*iter)));
    else if (*iter == '+')
      this->add();
    else if (*iter == '-')
      this->subtract();
    else if (*iter == '*')
      this->multiply();
    else if (*iter == '/')
      this->divide();

  if (this->nbrs_.size() != 1)
    throw std::invalid_argument("Stack is not empty at the end");
  return this->nbrs_.top();
}
