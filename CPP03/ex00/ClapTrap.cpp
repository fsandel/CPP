/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:30:51 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/29 14:36:05 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor got called" << std::endl;
	this->_AttackDamage = 0;
	this->_EnergyPoints = 10;
	this->_HitPoints = 10;
}

ClapTrap::ClapTrap(std::string name):_Name(name)
{
	std::cout << "Name Constructor got called" << std::endl;
	this->_AttackDamage = 0;
	this->_EnergyPoints = 10;
	this->_HitPoints = 10;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "Copy constructor got called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor got called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap&obj)
{
	std::cout << "Assign operator got called" << std::endl;
	this->_Name = obj._Name;
	this->_HitPoints = obj._HitPoints;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_AttackDamage = obj._AttackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_HitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is dead and can't attack!" << std::endl;
		return ;
	}
	if (this->_EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_Name << " doesnt have enough Energy to attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_HitPoints -= amount;
	std::cout << "ClapTrap " << this->_Name << " takes " << amount << " damage and now has " << this->_HitPoints << " HP left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is dead and can't be repaired!" << std::endl;
		return ;
	}
	if (this->_EnergyPoints > 0)
	{
		this->_HitPoints += amount;
		std::cout << "ClapTrap " << this->_Name << " gets repaired for " << amount << " HP and now has "<< this->_HitPoints << " HP left!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_Name << " doesnt have enough Energy to be Repaired!" << std::endl;

}
