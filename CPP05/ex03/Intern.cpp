#include "Intern.hpp"

const std::string Intern::_forms[3] = {"shrubbery", "robotomy", "pardon"};

Intern::Intern()
{
	std::cout << "An intern got created" << std::endl;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern&obj)
{
	(void)obj;
	return (*this);
}

void	delete_unused_forms(AForm *all_forms[3], int i)
{
	int	counter = 0;

	while (counter < 3)
	{
		if (counter != i)
		{
			delete all_forms[counter];
		}
		counter++;
	}
}

AForm *Intern::makeForm(std::string form_name, std::string target) const
{
	int	switch_value = 0;
	enum cases {shrubbery = 1, robotomy = 2, pardon = 4};

	std::cout << "The intern is trying to create a form with the name "
			  << form_name
			  << " directed at "
			  << target
			  << std::endl;

	switch_value += (!form_name.find(this->_forms[0])
		|| !this->_forms[0].find(form_name)) * shrubbery;
	switch_value += (!form_name.find(this->_forms[1])
		|| !this->_forms[1].find(form_name)) * robotomy;
	switch_value += (!form_name.find(this->_forms[2])
		|| !this->_forms[2].find(form_name)) * pardon;

	switch (switch_value)
	{
		case (shrubbery):
			return (new ShrubberyCreationForm(target));
		case (robotomy):
			return (new RobotomyRequestForm(target));
		case (pardon):
			return (new PresidentialPardonForm(target));
	}

	std::cout << "Sadly the notes of the intern were to ugly \
		and there was no way a correct form could be created"
			  << std::endl;
	return (NULL);
}

Intern::Intern(Intern const &obj)
{
	*this = obj;
}
