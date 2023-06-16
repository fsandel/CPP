#include "RPN.hpp"

bool RPN::is_valid_rpn_char(std::string::iterator iter) {
  if (std::isdigit(*iter) || *iter == '+' || *iter == '-' || *iter == '*' ||
      *iter == '/')
    return true;
  else
    return false;
}

bool RPN::is_valid_rpn_string(std::string str_represenation) {
  unsigned int count = 0;
  for (std::string::iterator iter = str_represenation.begin();
       iter < str_represenation.end(); ++iter) {
    if (count % 2 == 0 && !is_valid_rpn_char(iter)) return false;
    if (count % 2 == 1 && *iter != ' ') return false;
    count++;
  }
  if (str_represenation.length() > 0)
    return true;
  else
    return false;
}
