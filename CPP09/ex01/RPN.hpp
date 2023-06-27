#ifndef RPN_HPP_
#define RPN_HPP_

#include <iostream>
#include <iterator>
#include <stack>
#include <stdexcept>
#include <string>
#include <cstdlib>

class RPN {
 public:
  ~RPN();
  RPN(const RPN& obj);
  RPN& operator=(const RPN& obj);
  RPN(std::string str_represenation);

  int solve();

 private:
  std::stack<int> nbrs_;
  std::string str_;

  RPN();
  static bool is_valid_rpn_char(std::string::iterator iter);
  static bool is_valid_rpn_string(std::string str_represenation);

  void add();
  void multiply();
  void divide();
  void subtract();
};

#endif  // RPN_HPP_
