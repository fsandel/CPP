#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("anonym"), _grade(75)
{
	std::cout << this->_name << " Bureaucrat with grade " << this->_grade << " got created" << std::endl; 
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
	{
		this->_grade = grade;
		std::cout << this->_name << " Bureaucrat with grade " << this->_grade << " got created" << std::endl;
	}
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
	{
		this->_grade--;
		std::cout << this->_name << "'s grade got incremented to " << this->_grade << std::endl;
	}
}

void Bureaucrat::decrementGrade(void)
{
	if (this->_grade > 149)
		throw (Bureaucrat::GradeTooLowException());
	else
	{
		this->_grade++;
		std::cout << this->_name << "'s grade got decremented to " << this->_grade << std::endl;
	}
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
	return ("\033[1;31mException: standart\033[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[1;31mException: grade is too low\033[0m");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[1;31mException: grade is too high\033[0m");
}
