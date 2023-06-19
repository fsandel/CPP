#include "pair_operator.h"

bool operator<(std::pair<int, int> left, std::pair<int, int> right) {
  if (SIDE == 0)
    return left.second < right.second;
  else
    return left.first < right.first;
}

bool operator<=(std::pair<int, int> left, std::pair<int, int> right) {
  if (SIDE == 0)
    return left.second <= right.second;
  else
    return left.first <= right.first;
}

bool operator>(std::pair<int, int> left, std::pair<int, int> right) {
  if (SIDE == 0)
    return left.second > right.second;
  else
    return left.first > right.first;
}

bool operator>=(std::pair<int, int> left, std::pair<int, int> right) {
  if (SIDE == 0)
    return left.second >= right.second;
  else
    return left.first >= right.first;
}

bool operator==(std::pair<int, int> left, std::pair<int, int> right) {
  if (SIDE == 0)
    return left.second == right.second;
  else
    return left.first == right.first;
}

bool operator!=(std::pair<int, int> left, std::pair<int, int> right) {
  if (SIDE == 0)
    return left.second != right.second;
  else
    return left.first = right.first;
}
