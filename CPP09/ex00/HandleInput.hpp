#ifndef HANDLEINPUT_HPP_
#define HANDLEINPUT_HPP_

#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

#include "BitcoinExchange.hpp"
#include "utils.h"

void HandleInput(std::string inputfile, BitcoinExchange& database);

#endif  // HANDLEINPUT_HPP_
