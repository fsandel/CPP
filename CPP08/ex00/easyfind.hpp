#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <exception>
#include <iostream>
#include <iterator>
#include <string>

template <typename Type>
int easyfind(Type container, int input) {
  typename Type::iterator it =
      std::find(container.begin(), container.end(), input);
  if (it != container.end())
    return std::distance(container.begin(), it);
  else
    throw std::exception();
}
#endif