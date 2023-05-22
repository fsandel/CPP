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
	RobotomyRequestForm		test;

	std::cout << std::endl;
	master.signForm(*form);
	master.executeForm(*form);
	delete form;

	std::cout << std::endl << std::endl;
	form = ole.makeForm("no idea", "no target");
	std::cout << std::endl << std::endl;

	system("leaks a.out");
	return (0);
}