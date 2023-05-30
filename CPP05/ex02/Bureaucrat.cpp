#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("anonym"), _grade(75) {
  std::cout << this->_name << " Bureaucrat with grade " << this->_grade
            << " got created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
  std::cout << "Tyring to create Bureaucrat " << name << " with grade " << grade
            << std::endl;
  if (grade > 150)
    throw(Bureaucrat::GradeTooLowException());
  else if (grade < 1)
    throw(Bureaucrat::GradeTooHighException());
  else {
    this->_grade = grade;
    std::cout << this->_name << " Bureaucrat with grade " << this->_grade
              << " got created" << std::endl;
  }
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
  this->_grade = obj._grade;
  return (*this);
}

const std::string Bureaucrat::getName() const { return (this->_name); }

int Bureaucrat::getGrade() const { return (this->_grade); }

void Bureaucrat::incrementGrade(void) {
  std::cout << "Trying to increment " << this->_name << " with a grade of "
            << this->_grade << std::endl;
  if (this->_grade < 2)
    throw(Bureaucrat::GradeTooHighException());
  else {
    this->_grade--;
    std::cout << this->_name << "'s grade got incremented to " << this->_grade
              << std::endl;
  }
}

void Bureaucrat::decrementGrade(void) {
  std::cout << "Trying to decrement " << this->_name << " with a grade of "
            << this->_grade << std::endl;
  if (this->_grade > 149)
    throw(Bureaucrat::GradeTooLowException());
  else {
    this->_grade++;
    std::cout << this->_name << "'s grade got decremented to " << this->_grade
              << std::endl;
  }
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : _name(obj._name) {
  *this = obj;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
  os << obj.getName() << " has a grade of " << obj.getGrade() << std::endl;
  return (os);
}

const char *Bureaucrat::Exception::what() const throw() {
  return ("\033[1;31mException: standart\033[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("\033[1;31mException: grade is too low\033[0m");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("\033[1;31mException: grade is too high\033[0m");
}

void Bureaucrat::signForm(AForm &form) const {
  std::cout << this->_name << " with grade " << this->_grade
            << " trying to sign " << form.getName() << " with GradeToSign "
            << form.getReqGradeSign() << std::endl;
  try {
    form.beSigned(*this);
  } catch (AForm::AlreadySignedException &) {
    std::cout << this->_name << " couldn't sign " << form.getName()
              << " because "
              << "it's already signed" << std::endl;
  } catch (AForm::GradeTooLowException &) {
    std::cout << this->_name << " couldn't sign " << form.getName()
              << " because "
              << "their grade is too low" << std::endl;
  } catch (std::exception &) {
    std::cout << this->_name << " couldn't sign " << form.getName()
              << " because "
              << "this one should't show" << std::endl;
  }
}

void Bureaucrat::executeForm(AForm const &form) const {
  std::cout << this->_name << " with grade " << this->_grade
            << " is trying to execute " << form.getName()
            << " with GradeToExec of " << form.getReqGradeExec() << std::endl;
  if (this->_grade > form.getReqGradeExec())
    std::cout << this->_name << "'s grade is to low to execute "
              << form.getName() << std::endl;
  else if (form.getSigned() == false)
    std::cout << this->_name << " can't sign " << form.getName()
              << " because it's already signed" << std::endl;
  else {
    form.execute(*this);
    std::cout << this->_name << " successfully executed " << form.getName()
              << std::endl;
  }
}
