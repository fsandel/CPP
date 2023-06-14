#ifndef MUTANTSTACK_TPP_
#define MUTANTSTACK_TPP_

#include <deque>
#include <iterator>
#include <stack>

#include "MutantStack.hpp"

template <class Type, typename Container>
MutantStack<Type, Container>::MutantStack() : std::stack<Type, Container>() {}

template <class Type, typename Container>
MutantStack<Type, Container>::~MutantStack() {}

template <class Type, typename Container>
MutantStack<Type, Container>::MutantStack(const MutantStack& obj)
    : std::stack<Type, Container>(obj) {}

template <class Type, typename Container>
MutantStack<Type, Container>& MutantStack<Type, Container>::operator=(
    const MutantStack<Type, Container>& obj) {
  *this = obj;
  return *this;
}

template <class Type, typename Container>
typename MutantStack<Type, Container>::iterator
MutantStack<Type, Container>::begin() {
  return std::stack<Type>::c.begin();
}

template <class Type, typename Container>
typename MutantStack<Type, Container>::iterator
MutantStack<Type, Container>::end() {
  return std::stack<Type>::c.end();
}

#endif  // MUTANTSTACK_TPP_
