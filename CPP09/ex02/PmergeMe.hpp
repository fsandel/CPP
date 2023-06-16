#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <vector>
#include <deque>
#include <cstdlib>
#include <stdexcept>
#include <climits>
#include <ctime>
#include <iterator>
#include <iostream>

template <typename Type>
void printContainer(Type container, bool sh = true) {
  std::string ret = "";
  for(typename Type::iterator iter = container.begin(); iter < container.end(); iter++) {
    if (iter != container.begin())
      std::cout << " ";
    std::cout << *iter;
    if (sh == true && distance(container.begin(), iter) > 2 && container.size() > 4) {
      std::cout << " [...]";
      break ;
    }
  }
}

class PmergeMe {
 public:
  ~PmergeMe();
  PmergeMe(const PmergeMe &obj);
  PmergeMe operator=(const PmergeMe &obj);
  PmergeMe(int argc, char **argv);
  bool validateInput(char **argv);
  double getInputTime() const;
  std::vector<int> getVector() const;
  std::deque<int> getDeque() const;
 private:
  double inputTime_;
  std::vector<int> before_copy;
  PmergeMe();
  std::vector<int> vector_;
  std::deque<int> deque_;
  void checkDuplicate(int new_nb) const;
};


#endif  // PMERGEME_HPP_
