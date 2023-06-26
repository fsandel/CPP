#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <climits>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <set>
#include <stdexcept>
#include <utility>
#include <vector>

#include "InsertionSort.hpp"
#include "Jacobsthal.hpp"
#include "MergeSort.h"
#include "pair_operator.h"
#include "rules.h"

template <class Type, class Pair>
class PmergeMe {
 public:
  ~PmergeMe() {}
  PmergeMe(int argc, char** argv);

  void sort();
  void log(std::string name);

  double getTime() const;
  Type& getCont();

 private:
  double inputTime_;
  double sortTime_;
  int size_;
  int leftover_;

  Pair pair_cont_;
  Type cont_;
  Type before_;
  Type jacobsthal_;

  PmergeMe();
  PmergeMe(const PmergeMe& obj);
  PmergeMe operator=(const PmergeMe& obj);

  void checkDuplicate(int new_nb) const;
  void fillPairContainer();
};

#endif  // PMERGEME_HPP_
