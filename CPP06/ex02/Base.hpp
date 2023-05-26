#ifndef BASE_HPP_
#define BASE_HPP_

#include <iostream>
#include <string>

class Base {
 public:
  Base();
  ~Base();
  Base(Base const& obj);
  Base& operator=(const Base& obj);
  std::string getType(void) const;

 protected:
  std::string type_;
};

std::ostream& operator<<(std::ostream& os, const Base& obj);

#endif  // BASE_HPP_