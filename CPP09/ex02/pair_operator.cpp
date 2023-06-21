#include "pair_operator.h"

int max(std::pair<int, int> pair) {
  if (pair.first > pair.second)
    return pair.first;
  else
    return pair.second;
}

bool operator<(std::pair<int, int> left, std::pair<int, int> right) {
  return left.first < right.first;
}

bool operator<=(std::pair<int, int> left, std::pair<int, int> right) {
  return left.first <= right.first;
}

bool operator>(std::pair<int, int> left, std::pair<int, int> right) {
  return left.first > right.first;
}

bool operator>=(std::pair<int, int> left, std::pair<int, int> right) {
  return left.first >= right.first;
}

bool operator==(std::pair<int, int> left, std::pair<int, int> right) {
  return left.first == right.first;
}

bool operator!=(std::pair<int, int> left, std::pair<int, int> right) {
  return left.first != right.first;
}
