/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:54:44 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/08 17:29:33 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	make_loud(std::string argument)
{
	unsigned long	i;

	i = 0;
	while (i < argument.size())
	{
		if (argument.at(i) >= 'a' && argument.at(i) <= 'z')
			argument.at(i) += 'A' - 'a';
		i++;
	}
	return (argument);
	
}

int	main(int argc, char *argv[])
{
	int	arguments;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	arguments = 1;
	while (arguments < argc)
		std::cout << make_loud(argv[arguments++]);
	std::cout << "\n";
	return (0);
}
