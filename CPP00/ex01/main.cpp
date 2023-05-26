/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:13:30 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:37:51 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void exit_message(void);
static std::string turn_upper(std::string input);

int main(void) {
  std::string input;
  PhoneBook phonebook;

  std::cout << "You are now using 'My Awesome PhoneBook' have fun\n";
  while (1) {
    std::cout << "Your possible commands are 'ADD', 'SEARCH', or 'EXIT'\n";
    std::getline(std::cin, input, '\n');
    input = turn_upper(input);
    if (!std::cin)
      return (exit_message(), 0);
    else if (input.empty())
      continue;
    else if (input.compare("EXIT") == 0 && input.size() == 4)
      return (exit_message(), 0);
    else if (input.compare("ADD") == 0 && input.size() == 3)
      phonebook.add();
    else if (input.compare("SEARCH") == 0 && input.size() == 6)
      phonebook.search();
    else
      std::cout << "command doesnt exist, use 'EXIT', 'ADD' or 'SEARCH'"
                << "\n";
  }
  return (0);
}

static void exit_message(void) {
  std::cout << "You are now leaving 'My Awesome PhoneBook'" << std::endl;
}

static std::string turn_upper(std::string input) {
  unsigned long i;

  i = 0;
  while (i < input.size()) {
    input.at(i) = std::toupper(input.at(i));
    i++;
  }
  return (input);
}
