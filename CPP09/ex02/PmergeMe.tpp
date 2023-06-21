#ifndef PMERGEME_TPP_
#define PMERGEME_TPP_

#include "PmergeMe.hpp"

template <class Type, class Pair>
PmergeMe<Type, Pair>::PmergeMe(int argc, char **argv) {
  char *end_ptr = NULL;
  long nbr_long = 0;
  int nbr_int = 0;
  clock_t start = clock();

  for (int i = 1; i < argc; ++i) {
    if (argv[i][0] == '\0') throw std::invalid_argument("empty argument");
    nbr_long = std::strtol(argv[i], &end_ptr, 10);
    if (end_ptr[0] != '\0') throw std::invalid_argument("invalid number");
    if (nbr_long > INT_MAX) throw std::invalid_argument("number out of range");
    if (nbr_long < 0) throw std::invalid_argument("negative number");
    nbr_int = static_cast<int>(nbr_long);
    this->checkDuplicate(nbr_int);
    this->before_.push_back(nbr_int);
  }
  this->leftover_ = -1;
  this->fillPairContainer();
  this->sortTime_ = 0;
  this->size_ = argc - 1;
  this->inputTime_ = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;
}

template <class Type, class Pair>
void PmergeMe<Type, Pair>::fillPairContainer() {
  std::pair<int, int> tmp;
  int counter = 0;
  typename Type::iterator start = this->before_.begin();
  for (typename Type::iterator iter = start; iter != this->before_.end();
       ++iter) {
    if (counter % 2 == 0)
      tmp.first = *iter;
    else {
      tmp.second = *iter;
      if (tmp.first > tmp.second) std::swap(tmp.first, tmp.second);
      this->pair_cont_.push_back(tmp);
    }
    counter++;
  }
  if (counter % 2 == 1) {
    this->leftover_ = tmp.first;
  }
}


template <class Type, class Pair>
void PmergeMe<Type, Pair>::insertionSort() {
  typename Pair::iterator start = this->pair_cont_.begin();
  for (typename Pair::iterator iter = start; iter != this->pair_cont_.end();
       ++iter) {
    this->cont_.push_back((*iter).first);
  }
  for (typename Pair::iterator pair_iter = start; pair_iter != this->pair_cont_.end(); ++pair_iter) {
    typename Type::iterator insert_iter = this->cont_.begin();
    while ((*insert_iter) < (*pair_iter).second && insert_iter != this->cont_.end()) {insert_iter++;}
    this->cont_.insert(insert_iter, (*pair_iter).second);
  }
  if(this->leftover_ == -1)
    return ;
  typename Type::iterator insert_iter = this->cont_.begin();
  while (*insert_iter < this->leftover_) {insert_iter++;}
  this->cont_.insert(insert_iter, this->leftover_);
}

template <class Type, class Pair>
void PmergeMe<Type, Pair>::checkDuplicate(int new_nb) const {
  if (DUPLICATE)
    for (typename Type::const_iterator iter = this->before_.begin();
         iter != this->before_.end(); ++iter) {
      if (*iter == new_nb) throw std::invalid_argument("Duplicate found");
    }
}

template <class Type, class Pair>
void PmergeMe<Type, Pair>::sort() {
  clock_t start = clock();

  mergeSort<typename Pair::iterator, Pair>(this->pair_cont_.begin(),
                                           this->pair_cont_.end());
  this->insertionSort();
  this->sortTime_ = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;
}

template <class Type, class Pair>
void PmergeMe<Type, Pair>::log(std::string name) {
  std::cout << "Time to process a range of " << this->size_ << " elements with "
            << name << "\t" << this->getTime() << std::endl;
}

template <class Type, class Pair>
double PmergeMe<Type, Pair>::getTime() const {
  return this->sortTime_ + this->inputTime_;
}

template <class Type, class Pair>
Type &PmergeMe<Type, Pair>::getCont() {
  return this->cont_;
}

#endif  // PMERGEME_TPP_
