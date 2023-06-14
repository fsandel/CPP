#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <deque>
#include <iterator>
#include <stack>

template <class Type, typename Container = std::deque<Type> >
class MutantStack : public std::stack<Type, Container> {
 public:
  MutantStack();
  ~MutantStack();
  MutantStack(const MutantStack& obj);
  MutantStack& operator=(const MutantStack& obj);

  typedef typename std::stack<Type>::container_type::iterator iterator;
  using std::stack<Type, Container>::c;

  iterator begin();
  iterator end();
};

#include "MutantStack.tpp"

#endif  // MUTANTSTACK_HPP_
