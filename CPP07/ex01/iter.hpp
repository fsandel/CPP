#ifndef ITER_HPP_
#define ITER_HPP_

#include <cstddef>

template <typename Type, typename Ret>
void iter(Type* address, std::size_t size, Ret func) {
  for (std::size_t i = 0; i < size; i++) {
    func(address[i]);
  }
}

#endif  // ITER_HPP_
