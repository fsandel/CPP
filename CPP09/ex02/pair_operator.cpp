#include "pair_operator.h"

int max(std::pair<int, int> pair) {
  if (pair.first > pair.second)
    return pair.first;
  else
    return pair.second;
}

bool operator<(std::pair<int, int> left, std::pair<int, int> right) {
  return max(left) < max(right);
}

bool operator<=(std::pair<int, int> left, std::pair<int, int> right) {
  return max(left) <= max(right);
}

bool operator>(std::pair<int, int> left, std::pair<int, int> right) {
  return max(left) > max(right);
}

bool operator>=(std::pair<int, int> left, std::pair<int, int> right) {
  return max(left) >= max(right);
}

bool operator==(std::pair<int, int> left, std::pair<int, int> right) {
  return max(left) == max(right);
}

bool operator!=(std::pair<int, int> left, std::pair<int, int> right) {
  return max(left) != max(right);
}
