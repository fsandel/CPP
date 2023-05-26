#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string literal) {
  toChar(literal);
  toInt(literal);
  toFloat(literal);
  toDouble(literal);
}

void ScalarConverter::toChar(const std::string literal) { (void)literal; }

void ScalarConverter::toInt(const std::string literal) { (void)literal; }

void ScalarConverter::toFloat(const std::string literal) { (void)literal; }

void ScalarConverter::toDouble(const std::string literal) { (void)literal; }

void ScalarConverter::print_error(const Error error) {
  if (error == out_of_bounds)
    std::cout << "out_of_bouns" << std::endl;
  else if (error == impossible)
    std::cout << "impossible" << std::endl;
  else if (error == no_number)
    std::cout << "no_number" << std::endl;
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj) {
  (void)obj;
  return (*this);
}

ScalarConverter::ScalarConverter(ScalarConverter const& obj) { *this = obj; }
