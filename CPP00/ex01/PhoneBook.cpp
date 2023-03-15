/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:14:36 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/13 10:21:03 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

PhoneBook::PhoneBook()
{
	amount = 0;
}

std::string	get_input(std::string prompt)
{
	std::string	input;
	
	while (input.empty() && std::cin)
	{
		std::cout << prompt;
		std::getline(std::cin, input, '\n');
		if (input.empty())
			std::cout << "Input can't be empty\n";
	}
	return (input);
}

void PhoneBook::showLine(int i)
{
	std::cout << "         " << i << "|";
	std::cout << spacing(contact[i].first_name);
	std::cout << truncateString(contact[i].first_name) << "|" ;
	std::cout << spacing(contact[i].last_name);
	std::cout << truncateString(contact[i].last_name) << "|" ;
	std::cout << spacing(contact[i].phone_number);
	std::cout << truncateString(contact[i].phone_number) << "\n";
}

void PhoneBook::showContacts(void)
{
	int	i;

	i = 0;
	std::cout << "     Index|First Name| Last Name|  PhoneNum" << "\n";
	while (i < amount)
	{
		showLine(i);
		i++;
	}
}

std::string PhoneBook::truncateString(std::string str)
{
	char	truncatedString[11];

	if (str.size() <= 10)
		return (str);
	else
	{
		str.copy(truncatedString, 9, 0);
		truncatedString[9] = '.';
		truncatedString[10] = 0;
		return (truncatedString);
	}
}

std::string	PhoneBook::spacing(std::string str)
{
	std::string	spaces;

	if (str.size() >= 10)
		return ("");
	spaces = "          ";
	spaces.erase(10 - str.size(), 10);
	return (spaces);
}

void	PhoneBook::add(void)
{
	std::string first_name;
	std::string last_name;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Please enter the contact data" << "\n";
	first_name = get_input("First name:     ");
	last_name = get_input("Last name:      ");
	phone_number = get_input("phonenumber:    ");
	darkest_secret = get_input("darkest secret: ");
	std::cout << "Successfully added a contact\n";
	this->contact[amount++ % 8].fillContact(first_name, last_name, phone_number, darkest_secret);
}

int	get_index(std::string input)
{
	if (!input.empty() && std::isdigit(input.at(0)) && input.size() == 1)
		return (input.at(0) - '0');
	else
		return (-1);
}

void	PhoneBook::search(void)
{
	std::string	input;
	int			index;

	if (this->amount == 0)
	{
		std::cout << "There is no contact in the phonebook" << "\n";
		return ;
	}
	showContacts();
	std::cout << "Please enter the index of the contact you want to see" << "\n";
	std::getline(std::cin, input, '\n');
	index = get_index(input);
	if (index >= amount || index < 0)
	{
		std::cout << "Please use a valid index" << "\n";
		std::getline(std::cin, input, '\n');
		index = get_index(input);
		if (index >= amount || index < 0)
		{
			std::cout << "Please use a valid index, last try" << "\n";
			std::getline(std::cin, input, '\n');
			index = get_index(input);
		}
		if (index >= amount || index < 0)
		{
			std::cout << "Return to base phonebook" << "\n";
			return ;
		}
	}
	this->contact[index].show();
}
