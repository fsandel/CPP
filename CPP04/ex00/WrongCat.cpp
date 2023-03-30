/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:26 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/16 11:35:20 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
	this->type = "WrongCat";
	print("WrongCat constructor", GREEN);
}

WrongCat::~WrongCat()
{
	print("WrongCat destructor", GREEN);
}

WrongCat& WrongCat::operator=(const WrongCat&obj)
{
	this->type = obj.type;
	return (*this);
}

WrongCat::WrongCat(WrongCat &obj)
{
	*this = obj;
}

void	WrongCat::makeSound(void) const
{
	print("WrongCat sounds", GREEN);
}
