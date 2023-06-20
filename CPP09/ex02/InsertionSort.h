#ifndef INSERTIONSORT_H_
#define INSERTIONSORT_H_

#include <iterator>

template <typename Iterator>
void advance(Iterator& it) {
  it++;
}

template <typename Iterator>
Iterator prev(Iterator it) {
  it--;
  return it;
}

template <typename Iterator>
void insertionSort(Iterator first, Iterator last) {
  for (Iterator it = first; it != last; ++it) {
    typename std::iterator_traits<Iterator>::value_type current = *it;
    Iterator position = it;

    while (position != first && *(::prev(position)) > current) {
      *position = *(::prev(position));
      --position;
    }

    *position = current;
  }
}

#endif  // INSERTIONSORT_H_
