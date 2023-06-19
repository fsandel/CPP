#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <climits>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <utility>
#include <vector>

#include "MergeSort.h"
#include "pair_operator.h"

template <typename Type>
void printContainer(Type container, bool sh = true) {
  std::string ret = "";
  for (typename Type::iterator iter = container.begin(); iter < container.end();
       iter++) {
    if (iter != container.begin()) std::cout << " ";
    std::cout << *iter;
    if (sh == true && distance(container.begin(), iter) > 2 &&
        container.size() > 4) {
      std::cout << " [...]";
      break;
    }
  }
}

class PmergeMe {
 public:
  ~PmergeMe();
  PmergeMe(int argc, char **argv);

  double getInputTime() const;
  std::vector<int> getVector() const;
  std::deque<int> getDeque() const;

  void printLog() const;
  void sort();

 private:
  double inputTime_;
  double vectorTime_;
  double dequeTime_;

  std::vector<std::pair<int, int> > vector_pair_;
  std::deque<std::pair<int, int> > deque_pair_;
  std::vector<int> before_copy_;

  PmergeMe();
  PmergeMe(const PmergeMe &obj);
  PmergeMe operator=(const PmergeMe &obj);

  void checkDuplicate(int new_nb) const;
  void fillPairContainer();

  template <typename Type>
  void sortCont(Type &cont, double &time);
};

template <typename Type>
inline void PmergeMe::sortCont(Type &cont, double &time) {
  clock_t start = clock();

  mergeSort<typename Type::iterator, Type>(cont.begin(), cont.end());
  time = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;
}

#endif  // PMERGEME_HPP_
