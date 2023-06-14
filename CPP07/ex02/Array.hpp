#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <iostream>
#include <stdexcept>

template <class Type>
class Array {
 public:
  Array();
  Array(unsigned int size);
  ~Array();

  Array(Array const& obj);
  Array& operator=(const Array& obj);

  const Type* getArray(void) const;
  unsigned int size(void) const;

  Type& operator[](unsigned int i) const;

 private:
  Type* array_;
  unsigned long size_;
};

#endif  // ARRAY_HPP_
