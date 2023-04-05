/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:27:49 by fsandel           #+#    #+#             */
/*   Updated: 2023/04/03 14:44:56 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria()
{
	this->_type = "cure";
}

Cure::~Cure()
{
}

Cure& Cure::operator=(const Cure&obj)
{
	//this->_type = obj._type;
	(void) obj;
	return (*this);
}

Cure::Cure(const Cure &obj):AMateria(obj)
{
	*this = obj;
}

AMateria* Cure::clone() const
{
	AMateria* ret = new Cure(*this);
	return (ret);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
