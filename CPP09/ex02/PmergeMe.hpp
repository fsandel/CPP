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

#include "InsertionSort.h"
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

  PmergeMe();
  PmergeMe(const PmergeMe& obj);
  PmergeMe operator=(const PmergeMe& obj);

  void checkDuplicate(int new_nb) const;
  void fillPairContainer();
  void fillNormalContainer();
};

template <typename T>
void push_back(std::set<T>& s, const T& value) {
  s.insert(value);
}

std::ostream& operator<<(std::ostream& os, std::vector<int>& obj) {
  for (std::vector<int>::iterator iter = obj.begin(); iter < obj.end();
       iter++) {
    if (iter != obj.begin()) os << " ";
    os << *iter;
    if (SHORT && std::distance(obj.begin(), iter) > 2 && obj.size() > 4) {
      os << " [...]";
      break;
    }
  }
  return os;
}

std::ostream& operator<<(std::ostream& os, std::deque<int>& obj) {
  for (std::deque<int>::iterator iter = obj.begin(); iter < obj.end();
       iter++) {
    if (iter != obj.begin()) os << " ";
    os << *iter;
    if (SHORT && std::distance(obj.begin(), iter) > 2 && obj.size() > 4) {
      os << " [...]";
      break;
    }
  }
  return os;
}

std::ostream& operator<<(std::ostream& os, std::list<int>& obj) {
  for (std::list<int>::iterator iter = obj.begin(); iter != obj.end();
       iter++) {
    if (iter != obj.begin()) os << " ";
    os << *iter;
    if (SHORT && std::distance(obj.begin(), iter) > 2 && obj.size() > 4) {
      os << " [...]";
      break;
    }
  }
  return os;
}

std::ostream& operator<<(std::ostream& os, char** obj) {
  int size = 0;
  while (obj[size]) size++;
  for (int iter = 0; obj[iter]; iter++) {
    if (iter != 0) os << " ";
    os << obj[iter];
    if (SHORT && iter > 2 && size > 4) {
      os << " [...]";
      break;
    }
  }
  return os;
}

#endif  // PMERGEME_HPP_
