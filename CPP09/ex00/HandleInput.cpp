#include "HandleInput.hpp"

float readValue(std::string str) {
  char* end_ptr = NULL;
  if (str.size() < 4) throw std::runtime_error("invalid value in data");
  float nb = std::strtof(str.c_str() + 3, &end_ptr);
  if (!end_ptr) throw std::runtime_error("invalid value in data");
  if (end_ptr[0] != '\0') throw std::runtime_error("invalid value in data");
  if (nb < 0) throw std::runtime_error("negative value");
  if (nb > 1000) throw std::runtime_error("too large number");
  return nb;
}

void HandleInput(std::string inputfile, BitcoinExchange& database) {
  std::fstream file_stream(inputfile.c_str());
  if (!file_stream.is_open())
    throw std::ifstream::failure("Can't open " + inputfile);
  std::string tmp;
  std::getline(file_stream, tmp);
  if (tmp != "date | value")
    throw std::ifstream::failure("invalid Header " + inputfile);
  std::string first;
  std::string second;
  std::size_t delimiter;
  while (std::getline(file_stream, tmp)) {
    try {
      delimiter = tmp.find(" | ");
      if (delimiter == std::string::npos)
        throw std::runtime_error("invalid delimiter");
      first = tmp.substr(0, delimiter);
      second = tmp.substr(delimiter);
      std::cout << first << " => " << readValue(second) << " = "
                << readValue(second) * database.searchValue(DateToInt(first))
                << std::endl;
    } catch (std::exception& e) {
      std::cout << "Error: " << e.what() << std::endl;
    }
  }
}
