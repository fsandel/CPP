#ifndef EX00_SCALARCONVERTER_H_
#define EX00_SCALARCONVERTER_H_
#include <climits>
#include <cstdlib>
#include <iostream>
#include <string>

class ScalarConverter {
 public:
  static void convert(const std::string literal);

 private:
  enum Error { no_error, out_of_bounds, impossible, no_number };

  static void toChar(const std::string literal);
  static void toInt(const std::string literal);
  static void toFloat(const std::string literal);
  static void toDouble(const std::string literal);

  static void print_error(const enum Error error);

  ScalarConverter();
  ~ScalarConverter();
  ScalarConverter(ScalarConverter const &obj);
  ScalarConverter &operator=(const ScalarConverter &obj);
};

#endif  // EX00_SCALARCONVERTER_H_