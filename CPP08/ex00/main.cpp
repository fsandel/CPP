#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <vector>

#include "easyfind.h"

int main(int argc, char *argv[]) {
  int to_find;
  if (argc == 2)
    to_find = std::atoi(argv[1]);
  else
    to_find = 3;
  int numbers[] = {1, 2, 4, 3, 5};

  try {
    std::vector<int> cont(numbers, numbers + 5);
    int index = easyfind(cont, to_find);
    std::cout << "vector: " << to_find << " found at index " << index
              << std::endl;
  } catch (std::exception &) {
    std::cout << "not found" << std::endl;
  }

  try {
    std::deque<int> cont(numbers, numbers + 5);
    int index = easyfind(cont, to_find);
    std::cout << "deque: " << to_find << " found at index " << index
              << std::endl;
  } catch (std::exception &) {
    std::cout << "not found" << std::endl;
  }

  try {
    std::list<int> cont(numbers, numbers + 5);
    int index = easyfind(cont, to_find);
    std::cout << "list: " << to_find << " found at index " << index
              << std::endl;
  } catch (std::exception &) {
    std::cout << "not found" << std::endl;
  }

  try {
    std::set<int> cont(numbers, numbers + 5);
    int index = easyfind(cont, to_find);
    std::cout << "set: " << to_find << " found at index " << index << std::endl;
  } catch (std::exception &) {
    std::cout << "not found" << std::endl;
  }

  return 0;
}