#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name(""), _grade(75)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat&obj)
{
	this->_grade = obj._grade;
	return (*this);
}

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade(void)
{
	if (this->_grade < 2)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->_grade > 149)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj):_name(obj._name)
{
	*this = obj;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.getName() << " has a grade of " << obj.getGrade() << std::endl;
	return (os);
}

const char* Bureaucrat::Exception::what() const throw()
{
	return ("Exception: standart");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: grade is too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: grade is too high");
}
