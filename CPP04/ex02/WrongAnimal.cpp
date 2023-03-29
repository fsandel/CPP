/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:15 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/16 11:17:27 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	print("WrongAnimal constructor", BLUE);
}

WrongAnimal::~WrongAnimal()
{
	print("WrongAnimal destructor", BLUE);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal&obj)
{
	this->type = obj.type;
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal &obj)
{
	*this = obj;
}

void	WrongAnimal::makeSound(void) const
{
	if (this->type == "Dog")
		print("Dog sounds", RED);
	else if (this->type == "WrongCat")
		print("WrongCat sounds", GREEN);
	else
		print("WrongAnimal sounds", BLUE);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}