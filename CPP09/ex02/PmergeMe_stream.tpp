#ifndef PMERGEME_STREAM_TPP_
#define PMERGEME_STREAM_TPP_

#include "PmergeMe.hpp"

std::ostream& operator<<(std::ostream& os, std::vector<int>& obj);
std::ostream& operator<<(std::ostream& os, std::deque<int>& obj);
std::ostream& operator<<(std::ostream& os, char** obj);

#endif  // PMERGEME_STREAM_TPP_
