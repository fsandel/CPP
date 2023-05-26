#include "ScalarConverter.hpp"

static unsigned int len_skipping_zero(const std::string literal);
static bool str_is_num(const std::string literal);

void ScalarConverter::convert(const std::string literal) {
  char* end_ptr;
  double double_value = strtod(literal.c_str(), &end_ptr);
  if (literal.length() == 1 && !std::iswspace(literal.at(0)))
    convertChar(literal);
  else if (len_skipping_zero(literal) <= 10 && str_is_num(literal) &&
           double_value >= INT32_MIN && double_value <= INT32_MAX)
    convertInt(literal);
}

void ScalarConverter::convertChar(const std::string literal) {
  std::cout << "in convertChar" << std::endl;
  (void)literal;
}

void ScalarConverter::convertInt(const std::string literal) {
  std::cout << "in convertInt" << std::endl;

  (void)literal;
}

void ScalarConverter::convertFloat(const std::string literal) {
  std::cout << "in convertFloat" << std::endl;

  (void)literal;
}

void ScalarConverter::convertDouble(const std::string literal) {
  std::cout << "in convertDouble" << std::endl;

  (void)literal;
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj) {
  (void)obj;
  return (*this);
}

ScalarConverter::ScalarConverter(ScalarConverter const& obj) { *this = obj; }

static unsigned int len_skipping_zero(const std::string literal) {
  unsigned int i = 0;
  while (i < literal.length() && literal.at(i) == '0') i++;
  return (literal.length() - i);
}

static bool str_is_num(const std::string literal) {
  unsigned int i = 0;
  while (i < literal.length()) {
    if (std::isdigit(literal.at(i)) == 0) return false;
    i++;
  }
  return (true);
}