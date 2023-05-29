#include "ScalarConverter.hpp"

unsigned int ScalarConverter::len_skipping_zero(
    const std::string literal) {
  unsigned int i = 0;
  if (literal.at(i) == '+' || literal.at(i) == '-') i++;
  while (i < literal.length() && literal.at(i) == '0') i++;
  return (literal.length() - i);
}

bool ScalarConverter::str_is_num(const std::string literal) {
  unsigned int i = 0;
  if (literal.at(i) == '+' || literal.at(i) == '-') i++;
  while (i < literal.length()) {
    if (std::isdigit(literal.at(i)) == 0) return false;
    i++;
  }
  return (true);
}