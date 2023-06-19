#include <iostream>
#include <vector>

#include "PmergeMe.h"

int main(int argc, char *argv[]) {
  try {
    PmergeMe<std::vector<int>, std::vector<std::pair<int, int> > > merge(argc,
                                                                         argv);

    merge.sort();
  } catch (std::exception &e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
  return 0;
}
