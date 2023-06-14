#ifndef ARRAY_TPP_
#define ARRAY_TPP_

#include "Array.hpp"

template <class Type>
Array<Type>::Array() : size_(0) {
  this->array_ = new Type[0];
}

template <class Type>
Array<Type>::Array(unsigned int size) : size_(size) {
  this->array_ = new Type[size];
}

template <class Type>
Array<Type>::~Array() {
  delete this->array_;
}

template <class Type>
Array<Type>::Array(Array const& obj) : size_(obj.size_) {
  this->array_ = new Type[obj.size_];
  for (unsigned int i = 0; i < obj.size_; i++) {
    this->array_[i] = obj.array_[i];
  }
}

template <class Type>
Array<Type>& Array<Type>::operator=(const Array<Type>& obj) {
  delete this->array_;
  this->size_ = obj.size_;
  this->array_ = new Type[obj.size_];
  for (unsigned int i = 0; i < obj.size_; i++) {
    this->array_[i] = obj.array_[i];
  }
}

template <class Type>
unsigned int Array<Type>::size(void) const {
  return this->size_;
}

template <class Type>
Type& Array<Type>::operator[](unsigned int i) const {
  if (i >= this->size_) throw std::out_of_range("Out of range");
  return this->array_[i];
}

template <class Type>
const Type* Array<Type>::getArray(void) const {
  return this->array_;
}

#endif  //  ARRAY_TPP_
