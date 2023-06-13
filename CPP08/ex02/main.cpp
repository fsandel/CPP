#include <iostream>
#include <stack>
#include <deque>

#include "MutantStack.hpp"

int main(void) {
  std::cout << "hello world" << std::endl;
  int numbers[] = {2, 3, 5, 4, 1, 99};
  //std::deque<int> que(numbers[0], numbers[5]);

  MutantStack<int> mstack(que);
  mstack.push(numbers[0]);
  mstack.push(numbers[1]);
  mstack.push(numbers[2]);
  mstack.push(numbers[3]);
  mstack.push(numbers[4]);
  mstack.push(numbers[5]);

  //std::stack<int> mstack(que);
  //mstack.push(1);
  std::cout << *(mstack.begin())<< std::endl;
  std::cout << *(mstack.end() - 1) << std::endl;
  //(void)numbers;
  return 0;
}