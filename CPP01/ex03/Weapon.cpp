/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:30:06 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/28 10:08:40 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type):_type(type)
{
}
Weapon::~Weapon()
{
}
void	Weapon::setType(const std::string type)
{
	this->_type = type;
}

const std::string&	Weapon::getType(void) const
{
	return(this->_type);
}
