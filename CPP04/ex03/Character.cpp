/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:42:51 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/17 18:37:06 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string name)
{
	this->_name = name;
}

Character::~Character()
{
}

Character& Character::operator=(const Character&obj)
{
	int	i = 0;
	while (i < 4)
		delete this->slot[i++];
	i = 0;
	while (i < 4)
	{
		this->slot[i] = obj.slot[i];
		i++;
	}
	return (*this);
}

Character::Character(Character const &obj)
{
	*this = obj;
}

std::string const & Character::getName() const
{
	return (this->_name);
}
void Character::equip(AMateria* m)
{
	(void) m;
}
void Character::unequip(int idx)
{
	(void) idx;
}
void Character::use(int idx, ICharacter& target)
{
	(void)idx;
	(void)target;
}