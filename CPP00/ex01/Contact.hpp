/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 09:55:58 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/13 08:52:57 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

class Contact
{
public:
	std::string	first_name;
	std::string	last_name;
	std::string	phone_number;
	std::string	darkest_secret;
	void	fillContact(std::string f_name, std::string l_name, std::string p_number, std::string d_secret);
	void	show(void);
};
