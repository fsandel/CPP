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

template <class Type>
inline Array<Type>::Array() : size_(0) {
  this->array_ = new Type[0];
}

template <class Type>
inline Array<Type>::Array(unsigned int size) : size_(size) {
  this->array_ = new Type[size];
}

template <class Type>
inline Array<Type>::~Array() {
  delete this->array_;
}

template <class Type>
inline Array<Type>::Array(Array const& obj) : size_(obj.size_) {
  this->array_ = new Type[obj.size_];
  for (int i = 0; i < obj.size_; i++) {
    this->array_[i] = obj.array_[i];
  }
}

template <class Type>
inline Array<Type>& Array<Type>::operator=(const Array<Type>& obj) {
  delete this->array_;
  this->size_ = obj.size_;
  this->array_ = new Type[obj.size_];
  for (int i = 0; i < obj.size_; i++) {
    this->array_[i] = obj.array_[i];
  }
}

template <class Type>
inline unsigned int Array<Type>::size(void) const {
  return this->size_;
}

template <class Type>
inline Type &Array<Type>::operator[](unsigned int i) const
{
  if (i >= this->size_)
    throw std::out_of_range("Array");
  return this->array_[i];
}

template <class Type>
inline const Type* Array<Type>::getArray(void) const {
  return this->array_;
}
