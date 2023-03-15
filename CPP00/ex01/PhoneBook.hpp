/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:15:07 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/13 10:23:33 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

class PhoneBook
{
	private:
	int		amount;
	Contact	contact[8];

	void showLine(int i);
	void showContacts(void);
	std::string truncateString(std::string str);
	std::string	spacing(std::string str);

	public:
	PhoneBook(void);
	void	add(void);
	void	search(void);
};