#pragma once
#include <string>

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

class AForm;
class Intern {
 public:
  Intern();
  ~Intern();
  Intern(Intern const& obj);
  Intern& operator=(const Intern& obj);

  AForm* makeForm(std::string form_name, std::string target) const;

 private:
  static const std::string _forms[3];
};