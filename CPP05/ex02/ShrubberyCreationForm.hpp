#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class AForm;
class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &obj);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);

		void	execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
		static const int	_std_exec = 137;
		static const int	_std_sign = 145;
};