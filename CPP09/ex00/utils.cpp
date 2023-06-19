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

std::pair<std::string, std::string> split(std::string str,
                                          std::string delimiter) {
  std::size_t delimiter_pos = str.find(delimiter);
  if (delimiter_pos == std::string::npos)
    throw std::runtime_error("invalid delimiter => " + str);
  if (str.size() < delimiter_pos + delimiter.size())
    throw std::runtime_error("invalid date in data");
  std::string first = str.substr(0, delimiter_pos);
  std::string second = str.substr(delimiter_pos + delimiter.size());
  if (first.size() == 0) throw std::runtime_error("invalid date in data");
  if (second.size() < 1) throw std::runtime_error("invalid value in data");
  return std::make_pair(first, second);
}
