#include "AForm.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	try{
		AForm pass("pass a38", 100, 151);
		std::cout << pass;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try{
		AForm pass("pass a38", 100, 0);
		std::cout << pass;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try{
		AForm pass("pass a38", 151, 75);
		std::cout << pass;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try{
		AForm pass("pass a38", 0, 75);
		std::cout << pass;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try{
		AForm pass("pass a38", 100, 50);
		std::cout << pass;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	return (0);
}