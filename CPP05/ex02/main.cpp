#include <cstdlib>
#include <string>

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
  std::srand(std::time(0));
  try {
    Bureaucrat master("master", 1);
    std::cout << std::endl;
    RobotomyRequestForm robotomy("Ole");
    ShrubberyCreationForm shrubbery("Ole");
    PresidentialPardonForm pardon("Ole");

    std::cout << std::endl << std::endl;

    master.signForm(robotomy);
    master.signForm(shrubbery);
    master.signForm(pardon);

    std::cout << std::endl << std::endl;

    master.executeForm(robotomy);
    std::cout << std::endl;
    master.executeForm(shrubbery);
    std::cout << std::endl;
    master.executeForm(pardon);
    std::cout << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;

  try {
    Bureaucrat master("master", 1);
    std::cout << std::endl;
    RobotomyRequestForm robotomy("Ole");
    std::cout << std::endl;
    robotomy.execute(master);
    std::cout << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;

  try {
    Bureaucrat novice("novice", 138);
    std::cout << std::endl;
    ShrubberyCreationForm shrubbery("Ole");
    std::cout << std::endl;
    novice.signForm(shrubbery);
    std::cout << std::endl;
    shrubbery.execute(novice);
    std::cout << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;

  try {
    Bureaucrat novice("novice", 46);
    std::cout << std::endl;
    RobotomyRequestForm robotomy("Ole");
    std::cout << std::endl;
    novice.signForm(robotomy);
    std::cout << std::endl;
    robotomy.execute(novice);
    std::cout << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;

  try {
    Bureaucrat novice("novice", 6);
    std::cout << std::endl;
    PresidentialPardonForm pardon("Ole");
    std::cout << std::endl;
    novice.signForm(pardon);
    std::cout << std::endl;
    pardon.execute(novice);
    std::cout << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl << std::endl;

  Bureaucrat huey("huey", 138);
  Bureaucrat dewey("dewey", 46);
  Bureaucrat louie("louie", 6);
  std::cout << std::endl;
  ShrubberyCreationForm shubber("Donald");
  RobotomyRequestForm robotomy("Donald");
  PresidentialPardonForm pardon("Donald");
  std::cout << std::endl;
  huey.signForm(shubber);
  dewey.signForm(robotomy);
  louie.signForm(pardon);
  std::cout << std::endl;
  huey.executeForm(shubber);
  dewey.executeForm(robotomy);
  louie.executeForm(pardon);
  return (0);
}