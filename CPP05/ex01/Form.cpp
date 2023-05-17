#include "Form.hpp"

Form::Form():
		_name(""),
		_signed(false),
		_req_grade_sign(100),
		_req_grade_exec(50)
{
}

Form::Form(std::string name, int req_grade_sign, int req_grade_exec):
		_name(name),
		_signed(false),
		_req_grade_sign(req_grade_sign),
		_req_grade_exec(req_grade_exec)
{
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
	//if (bureaucrat.getGrade() <= this->_req_grade_sign)
}

Form::Form(Form const &obj):
		_name(obj._name),
		_signed(obj._signed),
		_req_grade_sign(obj._req_grade_sign),
		_req_grade_exec(obj._req_grade_exec)
{
}

const char* Form::Exception::what() const throw()
{
	return ("Exception: standart");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Exception: grade is too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Exception: grade is too high");
}
