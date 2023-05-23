#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(int argc, char *argv[])
{
	std::srand(std::time(0));

	if (argc == 2)
	{
		Intern		intern;
		Bureaucrat	master("master", 1);
		AForm		*form = intern.makeForm(argv[1], "default_target");

		if (!form)
			return (0);

		std::cout << std::endl;
		master.signForm(*form);
		master.executeForm(*form);
		delete form;
	}
	else
	{
		Intern		intern;
		Bureaucrat	master("master", 1);
		AForm		*form = intern.makeForm("robo", "bender");
		RobotomyRequestForm		test;

		std::cout << std::endl;
		master.signForm(*form);
		master.executeForm(*form);
		delete form;

		std::cout << std::endl << std::endl;
		form = intern.makeForm("no idea", "no target");
	}

	//std::cout << std::endl << std::endl;
	//system("leaks a.out");
	return (0);
}