#ifndef EX00_SCALARCONVERTER_H_
#define EX00_SCALARCONVERTER_H_
#include <cctype>
#include <climits>
#include <cstdlib>
#include <cwctype>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <math.h>

class ScalarConverter {
 public:
  static void convert(const std::string literal);

 private:
  static void convertChar(const std::string literal);
  static void convertInt(const std::string literal);
  static void convertFloat(const std::string literal);
  static void convertDouble(const std::string literal);

  static bool isChar(const std::string literal);
  static bool isInt(const std::string literal);
  static bool isFloat(const std::string literal);
  static bool isDouble(const std::string literal);

  static unsigned long len_skipping_zero(const std::string literal);
  static bool str_is_num(const std::string literal);


  ScalarConverter();
  ~ScalarConverter();
  ScalarConverter(ScalarConverter const &obj);
  ScalarConverter &operator=(const ScalarConverter &obj);
};

#endif  // EX00_SCALARCONVERTER_H_
