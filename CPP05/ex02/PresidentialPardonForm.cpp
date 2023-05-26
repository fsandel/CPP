#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", _std_sign, _std_exec),
      _target("default_target") {
  std::cout << "A default PresidentialPardonForm got created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", _std_sign, _std_exec), _target(target) {
  std::cout << "A PresidentialPardonForm with the target " << target
            << " got created." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(
    const PresidentialPardonForm &obj) {
  this->setSigned(obj.getSigned());
  this->_target = obj._target;
  return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(
    PresidentialPardonForm const &obj)
    : AForm(obj), _target(obj._target) {
  *this = obj;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
  AForm::execute(executor);
  std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox"
            << std::endl;
}
