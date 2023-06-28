#include "RPN.hpp"

void RPN::divide() {
  if (this->nbrs_.size() < 2)
    throw std::length_error("Not enough arguments during dividing");
  long tmp = this->nbrs_.top();
  this->nbrs_.pop();
  tmp = this->nbrs_.top() / tmp;
  if (tmp > INT_MAX) throw std::length_error("Internal overflow");
  if (tmp < INT_MIN) throw std::length_error("Internal underflow");
  this->nbrs_.pop();
  this->nbrs_.push(tmp);
}

void RPN::subtract() {
  if (this->nbrs_.size() < 2)
    throw std::length_error("Not enough arguments during subtracting");
  long tmp = this->nbrs_.top();
  this->nbrs_.pop();
  tmp = this->nbrs_.top() - tmp;
  if (tmp > INT_MAX) throw std::length_error("Internal overflow");
  if (tmp < INT_MIN) throw std::length_error("Internal underflow");
  this->nbrs_.pop();
  this->nbrs_.push(tmp);
}

void RPN::add() {
  if (this->nbrs_.size() < 2)
    throw std::length_error("Not enough arguments during adding");
  long tmp = this->nbrs_.top();
  this->nbrs_.pop();
  tmp = this->nbrs_.top() + tmp;
  if (tmp > INT_MAX) throw std::length_error("Internal overflow");
  if (tmp < INT_MIN) throw std::length_error("Internal underflow");
  this->nbrs_.pop();
  this->nbrs_.push(tmp);
}

void RPN::multiply() {
  if (this->nbrs_.size() < 2)
    throw std::length_error("Not enough arguments during multiplying");
  long tmp = this->nbrs_.top();
  this->nbrs_.pop();
  tmp = this->nbrs_.top() * tmp;
  if (tmp > INT_MAX) throw std::length_error("Internal overflow");
  if (tmp < INT_MIN) throw std::length_error("Internal underflow");
  this->nbrs_.pop();
  this->nbrs_.push(tmp);
}
