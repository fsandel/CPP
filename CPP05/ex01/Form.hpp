#pragma once
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name, int req_grade_sign, int req_grade_exec);
		~Form();
		Form(Form const &obj);
		Form& operator=(const Form& obj);

		std::string	getName(void) const;
		bool			getSigned(void) const;
		int			getReqGradeSign(void) const;
		int			getReqGradeExec(void) const;

		class Exception: std::exception{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException: Exception{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: Exception{
			public:
				virtual const char* what() const throw();
		};

		void	beSigned(Bureaucrat bureaucrat);
	private:
		const std::string	_name;
		bool				_signed;
		const int			_req_grade_sign;
		const int			_req_grade_exec;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);
