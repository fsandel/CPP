#include "Base.hpp"

Base::Base() { this->type_ = "Base"; }

Base::~Base() {}

Base& Base::operator=(const Base& obj) {
  this->type_ = obj.type_;
  return (*this);
}

std::string Base::getType(void) const { return this->type_; }

Base::Base(Base const& obj) { *this = obj; }

std::ostream& operator<<(std::ostream& os, const Base& obj) {
  os << obj.getType();
  return os;
}