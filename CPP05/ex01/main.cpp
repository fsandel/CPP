#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
  try {
    Form pass("pass a38", 100, 151);
    std::cout << pass;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl << std::endl;

  try {
    Form pass("pass a38", 100, 0);
    std::cout << pass;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl << std::endl;

  try {
    Form pass("pass a38", 151, 75);
    std::cout << pass;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl << std::endl;

  try {
    Form pass("pass a38", 0, 75);
    std::cout << pass;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl << std::endl;

  try {
    Form pass("pass a38", 100, 50);
    std::cout << pass;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl << std::endl;

  Form pass_a("pass a38", 100, 50);
  Form pass_b("pass b38", 100, 50);

  Bureaucrat obelix("Obelix", 125);
  Bureaucrat asterix("Asterix", 75);
  Bureaucrat miraculix("Miraculix", 25);

  std::cout << std::endl;

  pass_a.beSigned(obelix);
  pass_a.beSigned(asterix);
  pass_a.beSigned(miraculix);
  std::cout << pass_a;

  std::cout << std::endl;

  obelix.signForm(pass_b);
  asterix.signForm(pass_b);
  miraculix.signForm(pass_b);
  std::cout << pass_b;

  return (0);
}