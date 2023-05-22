#include "AForm.hpp"

AForm::AForm():
		_name("Empty Form"),
		_signed(false),
		_req_grade_sign(100),
		_req_grade_exec(50)
{
	std::cout << "An empty form with GradeToExec " << this->_req_grade_exec
				<< " and GradeToSign " << this->_req_grade_sign << " got created"
				<< std::endl;
}

AForm::AForm(std::string name, int req_grade_sign, int req_grade_exec):
		_name(name),
		_signed(false),
		_req_grade_sign(req_grade_sign),
		_req_grade_exec(req_grade_exec)
{
	std::cout << "Trying to create form " << name << " with GradeToExec of " << req_grade_exec << " and GradeToSign of " << req_grade_sign << std::endl;
	if (req_grade_exec > 150 || req_grade_sign > 150)
		throw (AForm::GradeTooLowException());
	else if (req_grade_exec < 1 || req_grade_sign < 1)
		throw (AForm::GradeTooHighException());
	else
	{
		std::cout << this->_name
				<< " with GradeToExec " << this->_req_grade_exec
				<< " and GradeToSign " << this->_req_grade_sign << " got created"
				<< std::endl;
	}
}

AForm::~AForm()
{
}

AForm& AForm::operator=(const AForm&obj)
{
	this->_signed = obj._signed;
	return (*this);
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

bool AForm::getSigned(void) const
{
	return (this->_signed);
}

int AForm::getReqGradeSign(void) const
{
	return (this->_req_grade_sign);
}

int AForm::getReqGradeExec(void) const
{
	return (this->_req_grade_exec);
}

void AForm::beSigned(Bureaucrat bureaucrat)
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

AForm::AForm(AForm const &obj):
		_name(obj._name),
		_signed(obj._signed),
		_req_grade_sign(obj._req_grade_sign),
		_req_grade_exec(obj._req_grade_exec)
{
}

std::ostream &operator<<(std::ostream &os, const AForm &obj)
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

const char* AForm::Exception::what() const throw()
{
	return ("\033[1;31mException: standart\033[0m");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("\033[1;31mException: grade is too low\033[0m");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("\033[1;31mException: grade is too high\033[0m");
}

void AForm::setSigned(const bool sign)
{
	this->_signed = sign;
}

void AForm::execute(Bureaucrat const &executor) const
{
	std::cout << this->_name << " with GradeToExec " << this->_req_grade_exec << " is trying to get executed by " << executor.getName() << " with a grade of " << executor.getGrade() << std::endl;
	if (this->_signed == false)
		throw(AForm::FormNotSigned());
	else if (this->_req_grade_exec < executor.getGrade())
		throw(AForm::GradeTooLowException());
	else
		std::cout << executor.getName() << " can execute " << this->_name << std::endl;
}

const char* AForm::FormNotSigned::what() const throw()
{
	return ("\033[1;31mException: form is not signed\033[0m");
}