#include <climits>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <set>
#include <stdexcept>

#include "rules.h"

void trySet(int argc, char *argv[]) {
  char *end_ptr = NULL;
  long nbr_long = 0;
  int nbr_int = 0;
  clock_t start = clock();
  std::set<int> set;
  for (int i = 1; i < argc; ++i) {
    if (argv[i][0] == '\0') throw std::invalid_argument("empty argument");
    nbr_long = std::strtol(argv[i], &end_ptr, 10);
    if (end_ptr[0] != '\0') throw std::invalid_argument("invalid number");
    if (nbr_long > INT_MAX) throw std::invalid_argument("number out of range");
    if (nbr_long < 0) throw std::invalid_argument("negative number");
    nbr_int = static_cast<int>(nbr_long);
    if (DUPLICATE)
      for (std::set<int>::iterator iter = set.begin(); iter != set.end();
           ++iter) {
        if (*iter == nbr_int) throw std::invalid_argument("Duplicate found");
      }
    set.insert(nbr_int);
  }
  double creation = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;

  std::cout << "Time to process a range of " << set.size()
            << " elements with std::set     \t" << creation << std::endl;
}

void tryMultiSet(int argc, char *argv[]) {
  char *end_ptr = NULL;
  long nbr_long = 0;
  int nbr_int = 0;
  clock_t start = clock();
  std::multiset<int> set;
  for (int i = 1; i < argc; ++i) {
    if (argv[i][0] == '\0') throw std::invalid_argument("empty argument");
    nbr_long = std::strtol(argv[i], &end_ptr, 10);
    if (end_ptr[0] != '\0') throw std::invalid_argument("invalid number");
    if (nbr_long > INT_MAX) throw std::invalid_argument("number out of range");
    if (nbr_long < 0) throw std::invalid_argument("negative number");
    nbr_int = static_cast<int>(nbr_long);
    if (DUPLICATE)
      for (std::multiset<int>::iterator iter = set.begin(); iter != set.end();
           ++iter) {
        if (*iter == nbr_int) throw std::invalid_argument("Duplicate found");
      }
    set.insert(nbr_int);
  }
  double creation = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;

  std::cout << "Time to process a range of " << set.size()
            << " elements with std::multiset\t" << creation << std::endl;
}
