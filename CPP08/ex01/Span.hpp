#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <vector>

class Span {
 public:
  Span(unsigned int N);
  ~Span();
  Span(const Span& obj);
  Span& operator=(const Span& obj);

  void addNumber(const int number);
  void addRange(const unsigned int start, const unsigned int end);
  void addRange(const unsigned int end);
  void addIter(const std::vector<int>::iterator iter,
               const unsigned int amount);
  void addIter(const std::vector<int>::iterator begin,
               const std::vector<int>::iterator end);
  void randomFill(int range = 10000);

  int shortestSpan() const;
  int longestSpan() const;

  unsigned int getSize() const;
  unsigned int getAmount() const;
  int operator[](unsigned int i) const;

 private:
  Span();

  std::vector<int> content_;
  unsigned int size_;
  unsigned int amount_;
};

std::ostream& operator<<(std::ostream& os, const Span& obj);

#endif  // SPAN_HPP_
