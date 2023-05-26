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
  std::cout << "It's " << *rand_element << " by it's built in type"
            << std::endl;
  identify(rand_element);
  identify(*rand_element);
  delete rand_element;
  return (0);
}