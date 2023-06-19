#include <cstdlib>
#include <stdexcept>
#include <string>

int DateToInt(std::string str) {
  char *end_ptr = NULL;
  long year = std::strtol(str.c_str(), &end_ptr, 10);
  if (!end_ptr) throw std::runtime_error("invalid date in data");
  if (end_ptr[0] != '-') throw std::runtime_error("invalid date in data");

  str = end_ptr + 1;
  long month = std::strtol(str.c_str(), &end_ptr, 10);
  if (!end_ptr) throw std::runtime_error("invalid date in data");
  if (end_ptr[0] != '-') throw std::runtime_error("invalid date in data");
  if (month > 12 || month < 1)
    throw std::runtime_error("invalid month in data");

  str = end_ptr + 1;
  long day = std::strtol(str.c_str(), &end_ptr, 10);
  if (!end_ptr) throw std::runtime_error("invalid date in data");
  if (end_ptr[0] != '\0') throw std::runtime_error("invalid date in data");
  if (day > 31 || day < 1) throw std::runtime_error("invalid day in data");
  return year * 100 * 100 + month * 100 + day;
}
