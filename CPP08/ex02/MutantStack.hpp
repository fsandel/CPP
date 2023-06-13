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
  
  typename Container::iterator begin() { return std::begin(c);}
  typename Container::iterator end() { return std::end(c);}
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

