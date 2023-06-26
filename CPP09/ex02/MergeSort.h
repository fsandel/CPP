#ifndef MERGESORT_H_
#define MERGESORT_H_

#include <iterator>

#include "pair_operator.h"

template <typename Iterator, typename Sequence>
void merge(Iterator begin, Iterator mid, Iterator end) {
  Sequence left(begin, mid);
  Sequence right(mid, end);

  Iterator leftIt = left.begin();
  Iterator rightIt = right.begin();
  Iterator mergeIt = begin;

  while (leftIt != left.end() && rightIt != right.end()) {
    if (*leftIt <= *rightIt) {
      *mergeIt = *leftIt;
      ++leftIt;
    } else {
      *mergeIt = *rightIt;
      ++rightIt;
    }
    ++mergeIt;
  }

  while (leftIt != left.end()) {
    *mergeIt = *leftIt;
    ++leftIt;
    ++mergeIt;
  }

  while (rightIt != right.end()) {
    *mergeIt = *rightIt;
    ++rightIt;
    ++mergeIt;
  }
}

template <typename Iterator, typename Sequence>
void mergeSort(Iterator first, Iterator last) {
  if (std::distance(first, last) > 1) {
    Iterator mid = first;
    std::advance(mid, std::distance(first, last) / 2);
    mergeSort<Iterator, Sequence>(first, mid);
    mergeSort<Iterator, Sequence>(mid, last);
    merge<Iterator, Sequence>(first, mid, last);
  }
}

#endif  // MERGESORT_H_
