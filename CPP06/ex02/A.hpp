#ifndef A_HPP_
#define A_HPP_

#include <string>

#include "Base.hpp"

class A : public Base {
 public:
  A();
  ~A();
  A(A const& obj);
  A& operator=(const A& obj);

 private:
};

#endif  // A_HPP_