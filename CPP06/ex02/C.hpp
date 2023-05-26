#ifndef C_HPP_
#define C_HPP_

#include <string>

#include "Base.hpp"
class C : public Base {
 public:
  C();
  ~C();
  C(C const& obj);
  C& operator=(const C& obj);

 private:
};

#endif  // C_HPP_