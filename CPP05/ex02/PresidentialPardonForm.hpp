#pragma once
#include <string>
#include "AForm.hpp"

class AForm;
class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);

		void	execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
		static const int	_std_exec = 5;
		static const int	_std_sign = 25;
};