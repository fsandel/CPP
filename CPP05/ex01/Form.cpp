#include "Form.hpp"

Form::Form():
		_name("Empty Form"),
		_signed(false),
		_req_grade_sign(100),
		_req_grade_exec(50)
{
	std::cout << "An empty form with GradeToExec " << this->_req_grade_exec
				<< " and GradeToSign " << this->_req_grade_sign << " got created"
				<< std::endl;
}

Form::Form(std::string name, int req_grade_sign, int req_grade_exec):
		_name(name),
		_signed(false),
		_req_grade_sign(req_grade_sign),
		_req_grade_exec(req_grade_exec)
{
	if (req_grade_exec > 150)
		throw (Form::GradeTooLowException());
	else if (req_grade_sign > 150)
		throw (Form::GradeTooLowException());
	else if (req_grade_exec < 1)
		throw (Form::GradeTooHighException());
	else if (req_grade_sign < 1)
		throw (Form::GradeTooHighException());
	else
	{
		std::cout << this->_name
				<< " with GradeToExec " << this->_req_grade_exec
				<< " and GradeToSign " << this->_req_grade_sign << " got created"
				<< std::endl;
	}
}

Form::~Form()
{
}

Form& Form::operator=(const Form&obj)
{
	this->_signed = obj._signed;
	return (*this);
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::getSigned(void) const
{
	return (this->_signed);
}

int Form::getReqGradeSign(void) const
{
	return (this->_req_grade_sign);
}

int Form::getReqGradeExec(void) const
{
	return (this->_req_grade_exec);
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	std::cout << this->_name << " with GradeToSign " << this->_req_grade_sign << " tries to get signed by " << bureaucrat.getName() << " with grade of " << bureaucrat.getGrade() << std::endl;
	if (this->_signed == true)
		std::cout << this->_name << " is already signed" << std::endl;
	else if (bureaucrat.getGrade() > this->_req_grade_sign)
		std::cout << this->_name << " can't be signed because " << bureaucrat.getName() << "'s grade is too low" << std::endl;
	else
	{
		std::cout << "Bureaucrat " << bureaucrat.getName() << " signed " << this->_name << std::endl;
		this->_signed = true;
	}
}

Form::Form(Form const &obj):
		_name(obj._name),
		_signed(obj._signed),
		_req_grade_sign(obj._req_grade_sign),
		_req_grade_exec(obj._req_grade_exec)
{
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
	if (obj.getSigned() == true)
	{
		os << obj.getName() << " is currently signed and" 
			<< " has a GradeToExec of " << obj.getReqGradeExec()
			<< " and a GradeToSign of " << obj.getReqGradeSign()
			<< std::endl;
	}
	else
	{
		os << obj.getName() << " is currently not signed and" 
			<< " has a GradeToExec of " << obj.getReqGradeExec()
			<< " and a GradeToSign of " << obj.getReqGradeSign()
			<< std::endl;
	}
	return (os);
}

const char* Form::Exception::what() const throw()
{
	return ("\033[1;31mException: standart\033[0m");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("\033[1;31mException: grade is too low\033[0m");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("\033[1;31mException: grade is too high\033[0m");
}
