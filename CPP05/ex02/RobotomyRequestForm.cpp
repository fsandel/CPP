#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", _std_sign, _std_exec),
      _target("default_target") {
  std::cout << "A default RobotomyRequestForm got created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", _std_sign, _std_exec), _target(target) {
  std::cout << "A RobotomyRequestForm with the target " << target
            << " got created." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(
    const RobotomyRequestForm &obj) {
  this->setSigned(obj.getSigned());
  this->_target = obj._target;
  return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
    : AForm(obj), _target(obj._target) {
  *this = obj;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
  AForm::execute(executor);
  std::cout << "* drilling noise *" << std::endl;
  system("say brrrr&");
  if (std::rand() % 2 == 0)
    std::cout << this->_target << " successfully got robotomised" << std::endl;
  else
    std::cout << "The Robotomy failed" << std::endl;
}
