#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "Hans with grade 151" << std::endl;
	try{
		Bureaucrat hans("Hans", 151);
		std::cout << hans;
	}
	catch (Bureaucrat::GradeTooHighException &exc){
		std::cout << exc.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &exc){
		std::cout << exc.what() << std::endl;
	}

	std::cout << "Hans with grade 0" << std::endl;
	try{
		Bureaucrat hans("Hans", 0);
		std::cout << hans;
	}
	catch (Bureaucrat::GradeTooHighException &exc){
		std::cout << exc.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &exc){
		std::cout << exc.what() << std::endl;
	}

	std::cout << "Hans with grade 1" << std::endl;
	try{
		Bureaucrat hans("Hans", 1);
		std::cout << hans;
	}
	catch (Bureaucrat::GradeTooHighException &exc){
		std::cout << exc.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &exc){
		std::cout << exc.what() << std::endl;
	}

	Bureaucrat hans("Hans", 1);
	std::cout << "decrement hans with grade 1" << std::endl;
	try{
		hans.decrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &exc){
		std::cout << exc.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &exc){
		std::cout << exc.what() << std::endl;
	}
	std::cout << hans;

	std::cout << "increment hans with grade 2" << std::endl;
	try{
		hans.incrementGrade();
		std::cout << "successfully incremented Grade" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &exc){
		std::cout << exc.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &exc){
		std::cout << exc.what() << std::endl;
	}

	std::cout << "increment hans with grade 1" << std::endl;
	try{
		hans.incrementGrade();
		std::cout << "successfully incremented Grade" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &exc){
		std::cout << exc.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &exc){
		std::cout << exc.what() << std::endl;
	}
	std::cout << hans;

	return (0);
}
