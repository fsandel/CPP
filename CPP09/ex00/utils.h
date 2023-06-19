#ifndef UTILS_H_
#define UTILS_H_

#include <string>

int DateToInt(std::string str);
std::pair<std::string, std::string> split(std::string str,
                                          std::string delimiter);
#endif  // UTILS_H_
