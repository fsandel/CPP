/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:27:45 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/30 14:35:41 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../interface.h"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria& AMateria::operator=(const AMateria&obj)
{
	this->_type = obj._type;
	return (*this);
}

AMateria::AMateria(AMateria const &obj)
{
	*this = obj;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

AMateria* AMateria::clone() const
{
	return (NULL);
}
void AMateria::use(ICharacter &target)
{
	(void)target;
}