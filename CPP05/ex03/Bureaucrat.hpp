#pragma once
#include <iostream>
#include <stdexcept>
#include <string>

#include "AForm.hpp"

class AForm;

class Bureaucrat {
 public:
  Bureaucrat();
  Bureaucrat(std::string name, int grade);
  ~Bureaucrat();
  Bureaucrat(Bureaucrat const& obj);
  Bureaucrat& operator=(const Bureaucrat& obj);

  const std::string getName(void) const;
  int getGrade(void) const;

  void incrementGrade(void);
  void decrementGrade(void);

  void signForm(AForm& form) const;
  void executeForm(AForm const& form) const;

  class Exception : public std::exception {
   public:
    virtual const char* what() const throw();
  };
  class GradeTooHighException : public Bureaucrat::Exception {
   public:
    const char* what() const throw();
  };
  class GradeTooLowException : public Bureaucrat::Exception {
   public:
    const char* what() const throw();
  };

 private:
  const std::string _name;
  int _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
