#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string& inputfile) {
  std::fstream file_stream(inputfile.c_str());
  if (!file_stream.is_open())
    throw std::ifstream::failure("Database: Can't open " + inputfile);
  std::string tmp;
  std::getline(file_stream, tmp);
  if (tmp != "date,exchange_rate")
    throw std::ifstream::failure("Database: invalid Header " + inputfile);
  std::pair<std::string, std::string> pair;
  while (std::getline(file_stream, tmp)) {
    if (tmp.size() == 0) continue;

    pair = split(tmp, ",");
    database_.insert(
        std::make_pair(DateToInt(pair.first), readValue(pair.second)));
  }
}

void BitcoinExchange::printDatabase() {
  for (std::map<int, float>::iterator iter = this->database_.begin();
       iter != this->database_.end(); ++iter) {
    std::cout << "date: " << (*iter).first << ", value: " << (*iter).second
              << std::endl;
  }
}

float BitcoinExchange::searchValue(int date) {
  std::map<int, float>::iterator iter = this->database_.begin();
  float value = -1;
  while ((*iter).first <= date) {
    value = (*iter).second;
    iter++;
  }
  if (value < 0) throw std::runtime_error("Database: No fitting value found");
  return value;
}

float BitcoinExchange::readValue(std::string str) {
  char* end_ptr = NULL;
  float nb = std::strtof(str.c_str(), &end_ptr);
  if (!end_ptr) throw std::runtime_error("Database: invalid value in data");
  if (end_ptr[0] != '\0') throw std::runtime_error("Database: invalid value in data");
  return nb;
}
