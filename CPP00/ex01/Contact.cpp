/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:43:25 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:37:45 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::fillContact(std::string f_name, std::string l_name,
                          std::string n_name, std::string p_number,
                          std::string d_secret) {
  first_name = f_name;
  last_name = l_name;
  nick_name = n_name;
  phone_number = p_number;
  darkest_secret = d_secret;
}

void Contact::show(void) {
  std::cout << "First name:     " << this->first_name << std::endl;
  std::cout << "Last name:      " << this->last_name << std::endl;
  std::cout << "Nickname:       " << this->nick_name << std::endl;
  std::cout << "Phone number:   " << this->phone_number << std::endl;
  std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}

std::string shortenString(const std::string str) {
  if (str.size() > 10)
    return (str.substr(0, 9).append("."));
  else
    return (str);
}

void Contact::showLine(const int index) const {
  std::cout << std::right << std::setw(10) << index << "|";
  std::cout << std::right << std::setw(10) << shortenString(this->first_name)
            << "|";
  std::cout << std::right << std::setw(10) << shortenString(this->last_name)
            << "|";
  std::cout << std::right << std::setw(10) << shortenString(this->nick_name)
            << std::endl;
}
