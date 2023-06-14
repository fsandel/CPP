#ifndef EASYFIND_TPP_
#define EASYFIND_TPP_

#include "easyfind.hpp"

template <typename Type>
int easyfind(Type container, int input) {
  typename Type::iterator it =
      std::find(container.begin(), container.end(), input);
  if (it != container.end())
    return std::distance(container.begin(), it);
  else
    throw std::exception();
}

#endif  //EASYFIND_TPP_
