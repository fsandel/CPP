#include "Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>

int	main(void)
{
	try{
		Bureaucrat hans("Hans", 0);
		std::cout << hans;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try{
		Bureaucrat hans("Hans", 0);
		std::cout << hans;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try{
		Bureaucrat hans("Hans", 1);
		std::cout << hans;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	Bureaucrat hans("Hans", 1);
	try{
		hans.decrementGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << hans;

	std::cout << std::endl << std::endl;

	try{
		hans.incrementGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try{
		hans.incrementGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << hans;

	return (0);
}
