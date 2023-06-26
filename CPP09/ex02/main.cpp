#include <deque>
#include <iostream>
#include <list>
#include <queue>
#include <set>
#include <vector>
#include <cmath>

#include "PmergeMe.h"
#include "rules.h"

void trySet(int argc, char *argv[]);
void tryMultiSet(int argc, char *argv[]);
int calc_jacobsthal(int iter, int size);

int counter;
#include <algorithm>

template <typename Container>
void checkSorting(const Container& arr) {
    Container sortedArr = arr;
    std::sort(sortedArr.begin(), sortedArr.end());

    if (arr == sortedArr) {
        std::cout << "The container is sorted." << std::endl;
    } else {
        std::cout << "The container is not sorted." << std::endl;
    }
}

int getNewIndexWithJacobsthal(int originalIndex) {
    int jacobsthalPrevPrev = 0;
    int jacobsthalPrev = 1;
    int currentIndex = 2;

    while (true) {
        int jacobsthalNumber = jacobsthalPrev + 2 * jacobsthalPrevPrev;
        if (jacobsthalNumber > originalIndex)
            return currentIndex - 1;

        jacobsthalPrevPrev = jacobsthalPrev;
        jacobsthalPrev = jacobsthalNumber;
        currentIndex++;
    }
}

int main(int argc, char *argv[]) {
  counter = 0;
  try {
    if (argc == 1) return 0;
    PmergeMe<std::vector<int>, std::vector<std::pair<int, int> > > vector(argc,
                                                                          argv);
    //PmergeMe<std::deque<int>, std::deque<std::pair<int, int> > > deque(argc,
    //                                                                   argv);
    //PmergeMe<std::list<int>, std::list<std::pair<int, int> > > list(argc, argv);

    vector.sort();
    //deque.sort();
    //list.sort();

    //std::cout << "Before: " << argv + 1 << std::endl;
    //std::cout << "After:  " << vector.getCont() << std::endl;

    //checkSorting(vector.getCont());
    std::cout << "Size: " << argc - 1 << ",   Counter: " << counter  << ",   Nln(N): " << (argc - 1) * log(argc - 1) << std::endl;
    //vector.log("std::vector  ");
    //deque.log("std::deque   ");
    //list.log("std::list    ");
    //trySet(argc, argv);
    //tryMultiSet(argc, argv);
  } catch (std::exception &e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
  return 0;
}
