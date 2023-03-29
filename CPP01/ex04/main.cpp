/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:48:25 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/29 16:30:35 by fsandel          ###   ########.fr       */
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
	{
		std::cout << "You need exactly 3 arguments" << std::endl;
		std::cout << "<filename> <from> <to>" << std::endl;
		return (-1);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1 == s2)
		return (0);
	if (s1.size() == 0)
	{
		std::cout << "First input can't be empty" << std::endl;
		return (-4);
	}
	std::fstream file;
	file.open(argv[1],std::ios::in);
	if (!file.is_open())
	{
		std::cout << argv[1] <<": file doesnt exist or can't be opened on read" << std::endl;
		return (-2);
	}
	std::string	str;
	std::string	line;
	while (std::getline(file, line))
	{
		str.append(line);
		str.append("\n");
	}
	file.close();
	std::string outname = argv[1];
	outname += ".replace";
	file.open(outname,std::ios::out);
	if (!file.is_open())
	{
		std::cout << argv[1] <<": file doesnt exist or can't be opened on write" << std::endl;
		return (-5);
	}
	replace(&str, s1, s2);
	file << str;
	file.flush();
	file.close();

	return (0);
}