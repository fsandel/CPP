#ifndef INSERTIONSORT_HPP_
#define INSERTIONSORT_HPP_

#include <iterator>

template <typename Container>
int binarySearch(const Container &arr, int left, int right, const int target) {
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] > target)
      right = mid - 1;
    else
      left = mid + 1;
  }
  return left;
}

template <class Type, class Pair>
void insertionSort(Type &cont, Pair &pair_cont, int leftover,
                   const Type &jacobsthal) {
  if (pair_cont.size() == 0) {
    cont.push_back(leftover);
    return;
  }
  typename Pair::iterator start = pair_cont.begin();
  for (typename Pair::iterator iter = start; iter != pair_cont.end(); ++iter)
    cont.push_back((*iter).second);

  cont.insert(cont.begin(), pair_cont[0].first);
  unsigned int size = pair_cont.size();
  for (unsigned int i = 1; i < size; ++i) {
    unsigned int jacobsthal_index = jacobsthal[i];
    unsigned int index = binarySearch(cont, 0, i + jacobsthal_index - 1,
                                      pair_cont[jacobsthal_index].first);
    cont.insert(cont.begin() + index, pair_cont[jacobsthal_index].first);
  }
  if (leftover != -1) {
    unsigned int index = binarySearch(cont, 0, cont.size() - 1, leftover);
    cont.insert(cont.begin() + index, leftover);
  }
}

#endif  // INSERTIONSORT_HPP_
