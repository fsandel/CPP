#include "BaseUtils.h"

Base *generate(void) {
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

void identify(Base &p) { (void)p; }

void identify(Base *p) { (void)p; }
