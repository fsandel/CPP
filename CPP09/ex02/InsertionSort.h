#ifndef INSERTIONSORT_H_
#define INSERTIONSORT_H_

#include <iterator>

template <typename Iterator>
void advance(Iterator& it,
             typename std::iterator_traits<Iterator>::difference_type n) {
  if (n >= 0) {
    while (n > 0) {
      ++it;
      --n;
    }
  } else {
    while (n < 0) {
      --it;
      ++n;
    }
  }
}

template <typename Iterator>
Iterator prev(Iterator it,
              typename std::iterator_traits<Iterator>::difference_type n) {
  ::advance(it, -n);
  return it;
}

template <typename Iterator>
void insertionSort(Iterator first, Iterator last) {
  for (Iterator it = first; it != last; ++it) {
    typename std::iterator_traits<Iterator>::value_type current = *it;
    Iterator position = it;

    while (position != first && *(::prev(position, 1)) > current) {
      *position = *(::prev(position, 1));
      --position;
    }

    *position = current;
  }
}

#endif  // INSERTIONSORT_H_
