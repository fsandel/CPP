#pragma once
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(std::string name, int req_grade_sign, int req_grade_exec);
		~AForm();
		AForm(AForm const &obj);
		AForm& operator=(const AForm& obj);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getReqGradeSign(void) const;
		int			getReqGradeExec(void) const;

		void	beSigned(Bureaucrat bureaucrat);

		class Exception: public std::exception{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException: public AForm::Exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public AForm::Exception{
			public:
				const char* what() const throw();
		};

	private:
		const std::string	_name;
		bool				_signed;
		const int			_req_grade_sign;
		const int			_req_grade_exec;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);
