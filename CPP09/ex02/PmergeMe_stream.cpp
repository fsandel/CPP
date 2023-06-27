#include <deque>
#include <iostream>
#include <iterator>
#include <vector>

#include "rules.h"

std::ostream& operator<<(std::ostream& os, std::vector<int>& obj) {
  for (std::vector<int>::iterator iter = obj.begin(); iter < obj.end();
       iter++) {
    if (iter != obj.begin()) os << " ";
    os << *iter;
    if (SHORT && std::distance(obj.begin(), iter) > 2 && obj.size() > 4) {
      os << " [...]";
      break;
    }
  }
  return os;
}

std::ostream& operator<<(std::ostream& os, std::deque<int>& obj) {
  for (std::deque<int>::iterator iter = obj.begin(); iter < obj.end(); iter++) {
    if (iter != obj.begin()) os << " ";
    os << *iter;
    if (SHORT && std::distance(obj.begin(), iter) > 2 && obj.size() > 4) {
      os << " [...]";
      break;
    }
  }
  return os;
}

std::ostream& operator<<(std::ostream& os, char** obj) {
  int size = 0;
  while (obj[size]) size++;
  for (int iter = 0; obj[iter]; iter++) {
    if (iter != 0) os << " ";
    os << obj[iter];
    if (SHORT && iter > 2 && size > 4) {
      os << " [...]";
      break;
    }
  }
  return os;
}
