#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <map>
#include <stdexcept>
#include <string>
#include <utility>

#include "utils.h"

class BitcoinExchange {
 public:
  ~BitcoinExchange();
  BitcoinExchange(const std::string &inputfile);

  void printDatabase();
  float searchValue(int date);

 private:
  std::map<int, float> database_;

  float readValue(std::string str);

  BitcoinExchange();
  BitcoinExchange(const BitcoinExchange &obj);
  BitcoinExchange operator=(const BitcoinExchange &obj);
};

#endif  // BITCOINEXCHANGE_HPP_
