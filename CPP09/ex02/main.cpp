#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>
#include <set>
#include <vector>

#include "PmergeMe.h"
#include "rules.h"

void trySet(int argc, char *argv[]);
void tryMultiSet(int argc, char *argv[]);

template <typename Container>
void checkSorting(const Container &arr) {
  Container sortedArr = arr;
  std::sort(sortedArr.begin(), sortedArr.end());

  if (arr == sortedArr) {
    std::cout << "The container is sorted." << std::endl;
  } else {
    std::cout << "The container is not sorted." << std::endl;
  }
}

int main(int argc, char *argv[]) {
  try {
    if (argc == 1) return 0;
    PmergeMe<std::vector<int>, std::vector<std::pair<int, int> > > vector(argc,
                                                                          argv);
    PmergeMe<std::deque<int>, std::deque<std::pair<int, int> > > deque(argc,
                                                                       argv);

    vector.sort();
    deque.sort();

    std::cout << "Before: " << argv + 1 << std::endl;
    std::cout << "After:  " << vector.getCont() << std::endl;

    //checkSorting(vector.getCont());
    vector.log("std::vector  ");
    deque.log("std::deque   ");
    trySet(argc, argv);
    tryMultiSet(argc, argv);
  } catch (std::exception &e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
  return 0;
}
