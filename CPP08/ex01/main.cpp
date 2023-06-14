#include <iostream>
#include <stdexcept>

#include "Span.hpp"

int main(void) {
  Span span(100000);
  span.addNumber(42);
  span.randomFill(1000000000);

  try {
    span.addNumber(42);
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    Span bad(1);
    bad.addNumber(1);
    bad.longestSpan();
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    Span bad(0);
    bad.longestSpan();
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  // std::cout << span << std::endl;
  std::cout << "longestSpan() " << span.longestSpan() << std::endl;
  std::cout << "shortestSpan() " << span.shortestSpan() << std::endl;

  std::cout << std::endl << "Now small span" << std::endl;
  Span small(10);
  small.randomFill(300);

  std::cout << small << std::endl;
  std::cout << "longestSpan() " << small.longestSpan() << std::endl;
  std::cout << "shortestSpan() " << small.shortestSpan() << std::endl;

  return (0);
}
