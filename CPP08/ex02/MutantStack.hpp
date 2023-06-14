#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_
#include <deque>
#include <stack>
#include <iterator>

template <class Type, typename Container = std::deque<Type> >
class MutantStack : public std::stack<Type, Container> {
  using std::stack<Type, Container>::c;

 public:
  MutantStack();
  ~MutantStack();
  MutantStack(const Container& cont);
  MutantStack(const MutantStack& obj);
  MutantStack& operator=(const MutantStack& obj);
  
  typedef typename std::stack<Type>::container_type::iterator iterator;

  iterator begin() { return std::stack<Type>::c.begin();}
  iterator end() { return std::stack<Type>::c.end();}
 private:
};

#endif  // MUTANTSTACK_HPP_

template <class Type, typename Container>
inline MutantStack<Type, Container>::MutantStack()
    : std::stack<Type, Container>() {}

template <class Type, typename Container>
inline MutantStack<Type, Container>::~MutantStack() {}

template <class Type, typename Container>
inline MutantStack<Type, Container>::MutantStack(const Container& cont)
    : std::stack<Type, Container>(cont) {}

template <class Type, typename Container>
inline MutantStack<Type, Container>::MutantStack(const MutantStack& obj)
    : std::stack<Type, Container>(obj) {}

template <class Type, typename Container>
inline MutantStack<Type, Container>& MutantStack<Type, Container>::operator=(
    const MutantStack<Type, Container>& obj) {
  *this = obj;
  return *this;
}

