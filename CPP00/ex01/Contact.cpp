/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:43:25 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/13 08:58:25 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	Contact::fillContact(std::string f_name, std::string l_name, std::string p_number, std::string d_secret)
{
	first_name = f_name;
	last_name = l_name;
	phone_number = p_number;
	darkest_secret = d_secret;
}

void	Contact::show(void)
{
	std::cout << "First name:     " << this->first_name << std::endl;
	std::cout << "Last name:      " << this->last_name << std::endl;
	std::cout << "Phone number:   " << this->phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}