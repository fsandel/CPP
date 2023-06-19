#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string& inputfile) {
  std::fstream file_stream(inputfile.c_str());
  if (!file_stream.is_open())
    throw std::ifstream::failure("Can't open " + inputfile);
  std::string tmp;
  std::getline(file_stream, tmp);
  if (tmp != "date,exchange_rate")
    throw std::ifstream::failure("invalid Header " + inputfile);
  std::string first;
  std::string second;
  while (std::getline(file_stream, tmp)) {
    first = tmp.substr(0, tmp.find(','));
    second = tmp.substr(tmp.find(','));
    database_.insert(std::make_pair(DateToInt(first), readValue(second)));
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
  if (value < 0) throw std::runtime_error("No fitting value found");
  return value;
}

float BitcoinExchange::readValue(std::string str) {
  char* end_ptr = NULL;
  if (str.size() < 2) throw std::runtime_error("invalid value in data");
  float nb = std::strtof(str.c_str() + 1, &end_ptr);
  if (!end_ptr) throw std::runtime_error("invalid value in data");
  if (end_ptr[0] != '\0') throw std::runtime_error("invalid value in data");
  return nb;
}
