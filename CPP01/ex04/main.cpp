/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:48:25 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/14 11:42:48 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace(std::string *str, std::string from, std::string to)
{
	std::size_t pos = str->find(from);
	while (pos != std::string::npos)
	{
		str->erase(pos, from.size());
		str->insert(pos, to);
		pos = str->find(from);
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (-1);
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1 == s2)
		return (0);
	std::ifstream infile(argv[1]);
	if (!infile.is_open())
	{
		std::cout << argv[1] <<": file doesnt exist or cant be opened on read\n";
		return (-2);
	}
	if (s1.size() == 0)
		return (0);

	std::string	str;
	std::string	line;
	while (std::getline(infile, line))
	{
		str.append(line);
		str.append("\n");
	}
	replace(&str, s1, s2);
	infile.close();
	std::ofstream outfile(argv[1]);
	if (!outfile.is_open())
	{
		std::cout << argv[1] <<": file doesnt exist or cant be opened on write\n";
		return (-3);
	}
	outfile << str;
	return (0);
}