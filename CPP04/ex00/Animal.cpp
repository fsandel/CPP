/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:15 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/16 11:17:27 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	print("Animal constructor", BLUE);
}

Animal::~Animal()
{
	print("Animal destructor", BLUE);
}

Animal& Animal::operator=(const Animal&obj)
{
	this->type = obj.type;
	return (*this);
}

Animal::Animal(Animal &obj)
{
	*this = obj;
}

void	Animal::makeSound(void) const
{
	if (this->type == "Dog")
		print("Dog sounds", RED);
	else if (this->type == "Cat")
		print("Cat sounds", GREEN);
	else
		print("Animal sounds", BLUE);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}