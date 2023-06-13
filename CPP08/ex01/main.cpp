#include <iostream>

#include "Span.hpp"

int main(void) {
  int arr[] = { 1, 2, 3, 4, 5 };
  std::vector<int> ar(arr, arr + 5);
  Span test(10);
  test.addIter(ar.begin(), ar.end());
  //test.addRange(3, 5);
  //test.addRange(2);
  //test.addNumber(-5);
  test.randomFill(100);
  //test.addRange(14);

  std::cout << test << std::endl;
  std::cout << "longestSpan() " << test.longestSpan() << std::endl;
  std::cout << "shortestSpan() " << test.shortestSpan() << std::endl;
  return (0);
}