#ifndef DATA_H_
#define DATA_H_
#include <iostream>
#include <string>

typedef struct data {
  std::string str;
  int nb;
} data_t;

std::ostream& operator<<(std::ostream& os, const data_t& obj);

#endif