#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string literal) {
  if (literal.length() == 0)
    std::cout << "Pls enter actual input" << std::endl;
  else if (isChar(literal))
    convertChar(literal);
  else if (isInt(literal))
    convertInt(literal);
  else if (isFloat(literal))
    convertFloat(literal);
  else if (isDouble(literal))
    convertDouble(literal);
  else if (std::iswspace(literal.at(0)))
    std::cout << "You shouldn't use whitespace at input" << std::endl;
  else
    std::cout << "No fitting conversion found" << std::endl;
}

void ScalarConverter::convertChar(const std::string literal) {
  std::cout << "in convertChar" << std::endl;
  char char_value = literal.at(0);
  int int_value = static_cast<int>(char_value);
  float float_value = static_cast<float>(char_value);
  double double_value = static_cast<double>(char_value);
  if (!std::isprint(char_value))
    std::cout << "char:\twhitespace" << std::endl;
  else
    std::cout << "char:\t" << char_value << std::endl;
  std::cout << "int:\t" << int_value << std::endl;
  std::cout << std::fixed << std::setprecision(1) << std::showpoint;
  std::cout << "float:\t" << float_value << "f" << std::endl;
  std::cout << "double:\t" << double_value << std::endl;
}

void ScalarConverter::convertInt(const std::string literal) {
  std::cout << "in convertInt" << std::endl;
  int int_value = std::atoi(literal.c_str());
  char char_value = static_cast<char>(int_value);
  float float_value = static_cast<float>(int_value);
  double double_value = static_cast<double>(int_value);

  if (int_value >= 128 || int_value < -128)
    std::cout << "char:\timpossible" << std::endl;
  else if (!std::isprint(char_value))
    std::cout << "char:\tnon printable" << std::endl;
  else
    std::cout << "char:\t" << char_value << std::endl;
  std::cout << "int:\t" << int_value << std::endl;
  std::cout << std::fixed << std::setprecision(1) << std::showpoint;
  std::cout << "float:\t" << float_value << "f" << std::endl;
  std::cout << "double:\t" << double_value << std::endl;
}

void ScalarConverter::convertFloat(const std::string literal) {
  std::cout << "in convertFloat" << std::endl;

  float float_value = static_cast<float>(std::strtod(literal.c_str(), NULL));
  char char_value = static_cast<char>(float_value);
  int int_value = static_cast<int>(float_value);
  double double_value = static_cast<double>(float_value);

  if (float_value >= 128 || float_value < -128 || literal == "nanf")
    std::cout << "char:\timpossible" << std::endl;
  else if (!std::isprint(char_value))
    std::cout << "char:\tnon printable" << std::endl;
  else
    std::cout << "int:\t" << char_value << std::endl;
  if (float_value >= INT_MAX || float_value < INT_MIN || literal == "nanf")
    std::cout << "int:\timpossible" << std::endl;
  else
    std::cout << "int:\t" << int_value << std::endl;
  if (!fmod(float_value, 1.0f))
    std::cout << std::fixed << std::setprecision(1) << std::showpoint;
  std::cout << "float:\t" << float_value << "f" << std::endl;
  std::cout << "double:\t" << double_value << std::endl;
}

void ScalarConverter::convertDouble(const std::string literal) {
  std::cout << "in convertDouble" << std::endl;
  double double_value = std::strtod(literal.c_str(), NULL);
  char char_value = static_cast<char>(double_value);
  int int_value = static_cast<int>(double_value);
  float float_value = static_cast<float>(double_value);

  if (double_value >= 128 || double_value < -128 || literal == "nan")
    std::cout << "char:\timpossible" << std::endl;
  else if (!std::isprint(char_value))
    std::cout << "char:\tnon printable" << std::endl;
  else
    std::cout << "char:\t" << char_value << std::endl;
  if (double_value >= INT_MAX || double_value < INT_MIN || literal == "nan")
    std::cout << "int:\timpossible" << std::endl;
  else
    std::cout << "int:\t" << int_value << std::endl;
  if (!fmod(float_value, 1.0f))
    std::cout << std::fixed << std::setprecision(1) << std::showpoint;
  if (double_value > __FLT_MAX__ || double_value < -__FLT_MAX__)
    std::cout << "float:\timpossible" << std::endl;
  else
    std::cout << "float:\t" << float_value << "f" << std::endl;
  std::cout << "double:\t" << double_value << std::endl;
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj) {
  (void)obj;
  return (*this);
}

ScalarConverter::ScalarConverter(ScalarConverter const& obj) { *this = obj; }
