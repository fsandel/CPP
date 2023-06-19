#include "HandleInput.hpp"

float readValue(std::string str) {
  char* end_ptr = NULL;
  float nb = std::strtof(str.c_str(), &end_ptr);
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
  std::pair<std::string, std::string> pair;
  while (std::getline(file_stream, tmp)) {
    if (tmp.size() == 0) continue;
    try {
      pair = split(tmp, " | ");
      std::cout << pair.first << " => " << readValue(pair.second) << " = "
                << readValue(pair.second) *
                       database.searchValue(DateToInt(pair.first))
                << std::endl;
    } catch (std::exception& e) {
      std::cout << "Error: " << e.what() << std::endl;
    }
  }
}
