#pragma once
#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &obj);
		Bureaucrat& operator=(const Bureaucrat& obj);

		const std::string	getName(void) const;
		int					getGrade(void) const;

		void	incrementGrade(void);
		void	decrementGrade(void);

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
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
