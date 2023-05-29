#include "ScalarConverter.hpp"

bool ScalarConverter::isChar(const std::string literal) {
  if (literal.length() == 1 && !std::iswspace(literal.at(0)))
    return true;
  else
    return false;
}

bool ScalarConverter::isInt(const std::string literal) {
  char* end_ptr = NULL;
  double double_value = std::strtod(literal.c_str(), &end_ptr);

  if (len_skipping_zero(literal) <= 10 && str_is_num(literal) &&
      double_value >= INT_MIN && double_value <= INT_MAX && end_ptr &&
      end_ptr[0] == '\0')
    return true;
  else
    return false;
}

bool ScalarConverter::isFloat(const std::string literal) {
  char* end_ptr = NULL;
  double double_value = std::strtod(literal.c_str(), &end_ptr);
  bool is_float = true;
  unsigned int i = 0;
  unsigned int j = 0;

  if (literal == "-inff" || literal == "+inff" || literal == "nanf")
    return true;
  try {
    if (literal.at(i) == '+' || literal.at(i) == '-') i++;
    while (i < literal.length()) {
      if (std::isdigit(literal.at(i)) == 0) break;
      i++;
    }
    if (literal.length() == i || literal.at(i) != '.') is_float = false;
    i++;
    while (i < literal.length()) {
      if (std::isdigit(literal.at(i)) == 0) break;
      i++;
      j++;
    }
    if ((is_float == true && (j == 0 || literal.at(i) != 'f')))
      is_float = false;
    if ((double_value <= __FLT_MAX__ && double_value >= -__FLT_MAX__ &&
         is_float == true && end_ptr && end_ptr[0] == 'f' &&
         end_ptr[1] == '\0'))
      return (true);
    else
      return false;
  } catch (std::exception&) {
    return false;
  }
}

bool ScalarConverter::isDouble(const std::string literal) {
  char* end_ptr = NULL;
  std::strtod(literal.c_str(), &end_ptr);
  bool is_double = true;
  unsigned int i = 0;
  unsigned int j = 0;

  if (literal == "-inf" || literal == "+inf" || literal == "nan") return true;
  if (literal.at(i) == '+' || literal.at(i) == '-') i++;
  while (i < literal.length()) {
    if (std::isdigit(literal.at(i)) == 0) break;
    i++;
  }
  if (literal.length() == i || literal.at(i) != '.') is_double = false;
  i++;
  while (i < literal.length()) {
    if (std::isdigit(literal.at(i)) == 0) break;
    i++;
    j++;
  }
  if (j == 0) is_double = false;
  if (is_double == true && end_ptr && end_ptr[0] == '\0')
    return true;
  else
    return false;
}
