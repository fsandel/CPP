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

#include "InsertionSort.h"
#include "MergeSort.h"
#include "pair_operator.h"

template <class Type>
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

template <class Type, class Pair>
class PmergeMe {
 public:
  ~PmergeMe() {}
  PmergeMe(int argc, char **argv);

  void sort();

 private:
  double inputTime_;
  double sortTime_;

  Pair pair_cont_;
  Type cont_;
  Type before_;

  PmergeMe();
  PmergeMe(const PmergeMe &obj);
  PmergeMe operator=(const PmergeMe &obj);

  void checkDuplicate(int new_nb) const;
  void fillPairContainer();
  void fillNormalContainer();
};

#endif  // PMERGEME_HPP_
