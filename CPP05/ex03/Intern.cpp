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
	AForm	*all_forms[3];
	int		i = 0;
	std::cout << "The intern is trying to create a form with the name " << form_name << " directed at " << target << std::endl;

	all_forms[0] = new ShrubberyCreationForm(target);
	all_forms[1] = new RobotomyRequestForm(target);
	all_forms[2] = new PresidentialPardonForm(target);

	while (i < 3){
		if (!form_name.find(this->_forms[i]) || !this->_forms[i].find(form_name))
			return (delete_unused_forms(all_forms, i), all_forms[i]);
		i++;
	}
	delete_unused_forms(all_forms, 3);
	std::cout << "Sadly the notes of the intern were to ugly and there was no way a correct form could be created" << std::endl;
	return (NULL);
}

Intern::Intern(Intern const &obj)
{
	*this = obj;
}
