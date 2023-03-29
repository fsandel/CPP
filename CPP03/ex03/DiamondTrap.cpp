/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:29:12 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/29 15:52:16 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Default DiamondTrap Constructor got called on" << std::endl;
	this->_AttackDamage = FragTrap::_AttackDamage;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_HitPoints = FragTrap::_HitPoints;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->_AttackDamage = FragTrap::_AttackDamage;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_HitPoints = FragTrap::_HitPoints;
	this->ClapTrap::_Name = name + "_clap_name";
	this->_Name = name;
	std::cout << "Name DiamondTrap Constructor got called on " << this->_Name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor got called on " << this->_Name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap&obj)
{
	this->_Name = obj._Name;
	this->ClapTrap::_Name = obj.ClapTrap::_Name;
	this->_HitPoints = obj._HitPoints;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_AttackDamage = obj._AttackDamage;
	return (*this);
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj):ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
	*this = obj;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_Name << "   ClapTrap name: " << this->ClapTrap::_Name << std::endl;
}
