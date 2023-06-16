#include "RPN.hpp"

void RPN::divide() {
  if (this->nbrs_.size() < 2) throw std::length_error("Not enough arguments during dividing");
  int tmp = this->nbrs_.top();
  this->nbrs_.pop();
  tmp = this->nbrs_.top() / tmp;
  this->nbrs_.pop();
  this->nbrs_.push(tmp);
}

void RPN::subtract() {
  if (this->nbrs_.size() < 2) throw std::length_error("Not enough arguments during subtracting");
  int tmp = this->nbrs_.top();
  this->nbrs_.pop();
  tmp = this->nbrs_.top() - tmp;
  this->nbrs_.pop();
  this->nbrs_.push(tmp);
}

void RPN::add() {
  if (this->nbrs_.size() < 2) throw std::length_error("Not enough arguments during adding");
  int tmp = this->nbrs_.top();
  this->nbrs_.pop();
  tmp = this->nbrs_.top() + tmp;
  this->nbrs_.pop();
  this->nbrs_.push(tmp);
}

void RPN::multiply() {
  if (this->nbrs_.size() < 2) throw std::length_error("Not enough arguments during multiplying");
  int tmp = this->nbrs_.top();
  this->nbrs_.pop();
  tmp = this->nbrs_.top() * tmp;
  this->nbrs_.pop();
  this->nbrs_.push(tmp);
}

