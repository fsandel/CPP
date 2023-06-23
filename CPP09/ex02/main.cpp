#include <deque>
#include <iostream>
#include <list>
#include <queue>
#include <set>
#include <vector>

#include "PmergeMe.h"
#include "rules.h"

void trySet(int argc, char *argv[]);
void tryMultiSet(int argc, char *argv[]);

int main(int argc, char *argv[]) {
  try {
    PmergeMe<std::vector<int>, std::vector<std::pair<int, int> > > vector(argc,
                                                                          argv);
    PmergeMe<std::deque<int>, std::deque<std::pair<int, int> > > deque(argc,
                                                                       argv);
    //PmergeMe<std::list<int>, std::list<std::pair<int, int> > > list(argc, argv);

    vector.sort();
    deque.sort();
    //list.sort();

    std::cout << "Before: " << argv + 1 << std::endl;
    std::cout << "After:  " << vector.getCont() << std::endl;

    vector.log("std::vector  ");
    deque.log("std::deque   ");
    //list.log("std::list    ");
    trySet(argc, argv);
    tryMultiSet(argc, argv);
  } catch (std::exception &e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
  return 0;
}
