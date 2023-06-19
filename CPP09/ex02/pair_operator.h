#ifndef PAIR_OPERATOR_H_
#define PAIR_OPERATOR_H_

#define SIDE 1

#include <utility>

bool operator<(std::pair<int, int> left, std::pair<int, int> right);
bool operator<=(std::pair<int, int> left, std::pair<int, int> right);
bool operator>(std::pair<int, int> left, std::pair<int, int> right);
bool operator>=(std::pair<int, int> left, std::pair<int, int> right);
bool operator==(std::pair<int, int> left, std::pair<int, int> right);
bool operator!=(std::pair<int, int> left, std::pair<int, int> right);

#endif  // PAIR_OPERATOR_H_
