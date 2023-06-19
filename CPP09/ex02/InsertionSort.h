#ifndef INSERTIONSORT_H_
#define INSERTIONSORT_H_

#include <iterator>

template <typename Iterator>
void insertionSort(Iterator first, Iterator last) {
  for (Iterator it = first; it != last; ++it) {
    typename std::iterator_traits<Iterator>::value_type current = *it;
    Iterator position = it;

    while (position != first && *(position - 1) > current) {
      *position = *(position - 1);
      --position;
    }

    *position = current;
  }
}

#endif  // INSERTIONSORT_H_
