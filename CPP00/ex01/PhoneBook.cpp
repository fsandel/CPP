/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:14:36 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:37:54 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static std::string get_input(std::string prompt);
static int get_index(std::string input);

PhoneBook::PhoneBook() { amount = 0; }

void PhoneBook::showContacts(void) {
  int i;

  i = 0;
  std::cout << "     Index|First Name| Last Name|  nickname" << std::endl;
  while (i < amount && i < 8) {
    this->contact[i].showLine(i);
    i++;
  }
}

void PhoneBook::add(void) {
  std::string first_name;
  std::string last_name;
  std::string nick_name;
  std::string phone_number;
  std::string darkest_secret;

  std::cout << "Please enter the contact data" << std::endl;
  first_name = get_input("First name:     ");
  last_name = get_input("Last name:      ");
  nick_name = get_input("nickname:       ");
  phone_number = get_input("phonenumber:    ");
  darkest_secret = get_input("darkest secret: ");
  std::cout << "Successfully added a contact" << std::endl;
  this->contact[amount++ % 8].fillContact(first_name, last_name, nick_name,
                                          phone_number, darkest_secret);
}

void PhoneBook::search(void) {
  std::string input;
  int index;

  if (this->amount == 0) {
    std::cout << "There is no contact in the phonebook" << std::endl;
    return;
  }
  showContacts();
  std::cout << "Please enter the index of the contact you want to see"
            << std::endl;
  std::getline(std::cin, input, '\n');
  index = get_index(input);
  if (index >= amount || index < 0 || index >= 8) {
    std::cout << "Please use a valid index" << std::endl;
    std::getline(std::cin, input, '\n');
    index = get_index(input);
    if (index >= amount || index < 0 || index >= 8) {
      std::cout << "Please use a valid index, last try" << std::endl;
      std::getline(std::cin, input, '\n');
      index = get_index(input);
    }
    if (index >= amount || index < 0 || index >= 8) {
      std::cout << "Return to base phonebook" << std::endl;
      return;
    }
  }
  this->contact[index].show();
}

static std::string get_input(std::string prompt) {
  std::string input;

  while (input.empty() && std::cin) {
    std::cout << prompt;
    std::getline(std::cin, input, '\n');
    if (input.empty()) std::cout << "Input can't be empty" << std::endl;
  }
  return (input);
}

static int get_index(std::string input) {
  if (!input.empty() && std::isdigit(input.at(0)) && input.size() == 1)
    return (input.at(0) - '0');
  else
    return (-1);
}