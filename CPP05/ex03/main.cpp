#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::srand(std::time(0));

	Intern		ole;
	Bureaucrat	master("master", 1);
	AForm		*form = ole.makeForm("robo", "bender");

	std::cout << std::endl;
	master.signForm(*form);
	master.executeForm(*form);
	delete form;
	return (0);
}