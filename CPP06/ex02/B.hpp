#ifndef B_HPP_
#define B_HPP_

#include <string>

#include "Base.hpp"

class B : public Base {
 public:
  B();
  ~B();
  B(B const& obj);
  B& operator=(const B& obj);

 private:
};

#endif  // B_HPP_