#include "BaseUtils.h"

Base* generate(void) {
  switch (std::rand() % 3) {
    case 0:
      return new A;
    case 1:
      return new B;
    case 2:
      return new C;

    default:
      return NULL;
  }
}

void identify(Base& p) {
  try {
    A test_a = dynamic_cast<A&>(p);
    std::cout << "It's an A reference" << std::endl;
  } catch (const std::exception&) {
  }
  try {
    B test_b = dynamic_cast<B&>(p);
    std::cout << "It's a B reference" << std::endl;
  } catch (const std::exception&) {
  }
  try {
    C test_c = dynamic_cast<C&>(p);
    std::cout << "It's a C reference" << std::endl;
  } catch (const std::exception&) {
  }
}

void identify(Base* p) {
  if (p == NULL) {
    std::cout << "Can't identify nullptr" << std::endl;
    return;
  }
  A* test_a = dynamic_cast<A*>(p);
  B* test_b = dynamic_cast<B*>(p);
  C* test_c = dynamic_cast<C*>(p);
  if (test_a != NULL) {
    std::cout << "It's an A pointer" << std::endl;
    return;
  } else if (test_b != NULL) {
    std::cout << "It's a B pointer" << std::endl;
    return;
  } else if (test_c != NULL) {
    std::cout << "It's a C pointer" << std::endl;
    return;
  } else
    std::cout << "Can't identify that pointer" << std::endl;
}
