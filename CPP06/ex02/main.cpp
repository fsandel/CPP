#include <cstdlib>
#include <ctime>
#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "BaseUtils.h"
#include "C.hpp"
int main(void) {
  std::srand(std::time(0));
  Base* rand_element = generate();
  std::cout << *rand_element << std::endl;
  delete rand_element;
  return (0);
}