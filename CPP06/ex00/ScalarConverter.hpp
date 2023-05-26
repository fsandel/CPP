#ifndef EX00_SCALARCONVERTER_H_
#define EX00_SCALARCONVERTER_H_
#include <climits>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cwctype>
#include <cctype>

class ScalarConverter {
 public:
  static void convert(const std::string literal);

 private:

  static void convertChar(const std::string literal);
  static void convertInt(const std::string literal);
  static void convertFloat(const std::string literal);
  static void convertDouble(const std::string literal);

  ScalarConverter();
  ~ScalarConverter();
  ScalarConverter(ScalarConverter const &obj);
  ScalarConverter &operator=(const ScalarConverter &obj);
};

#endif  // EX00_SCALARCONVERTER_H_