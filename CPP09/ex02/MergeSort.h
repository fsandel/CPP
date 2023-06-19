#ifndef MERGESORT_H_
#define MERGESORT_H_

#include <iterator>

#include "pair_operator.h"

template <typename Iterator, typename Sequence>
void mergeSort(Iterator begin, Iterator end);

template <typename Iterator, typename Sequence>
void merge(Iterator begin, Iterator mid, Iterator end) {
  Sequence temp(begin, end);
  Iterator left = temp.begin();
  Iterator right = mid;
  Iterator current = begin;

  while (left != mid && right != temp.end())
    *current++ = (*left <= *right) ? *left++ : *right++;

  while (left != mid) *current++ = *left++;

  while (right != temp.end()) *current++ = *right++;
}

template <typename Iterator, typename Sequence>
void mergeSort(Iterator begin, Iterator end) {
  if (distance(begin, end) > 1) {
    Iterator mid = begin + distance(begin, end) / 2 + 1;
    mergeSort<Iterator, Sequence>(begin, mid);
    mergeSort<Iterator, Sequence>(mid, end);
    merge<Iterator, Sequence>(begin, mid, end);
  }
}

#endif  // MERGESORT_H_
