#ifndef BASE_UTILS_HPP_
#define BASE_UTILS_HPP_
#include <cstdlib>

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif  // BASE_UTILS_HPP_