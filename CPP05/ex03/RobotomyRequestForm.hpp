#pragma once
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

#include "AForm.hpp"

class AForm;
class RobotomyRequestForm : public AForm {
 public:
  RobotomyRequestForm();
  RobotomyRequestForm(std::string target);
  ~RobotomyRequestForm();
  RobotomyRequestForm(RobotomyRequestForm const& obj);
  RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);

  void execute(Bureaucrat const& executor) const;

 private:
  std::string _target;
  static const int _std_exec = 45;
  static const int _std_sign = 72;
};