/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:29:12 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/15 13:43:19 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): FragTrap(), ScavTrap(), ClapTrap()
{
	std::cout << "Default DiamondTrap Constructor got called on" << std::endl;
	this->_AttackDamage = FragTrap::_AttackDamage;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_HitPoints = FragTrap::_HitPoints;

}

DiamondTrap::DiamondTrap(std::string name): FragTrap(name), ScavTrap(name), ClapTrap(name)
{
	this->_AttackDamage = FragTrap::_AttackDamage;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_HitPoints = FragTrap::_HitPoints;
	this->_Name = name;
	this->_Name.append("_clap_name");
	std::cout << "Name DiamondTrap Constructor got called on " << this->_Name << std::endl;
	std::cout << "attack: " << this->_AttackDamage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor got called on " << this->_Name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap&obj)
{
	this->_Name = obj.FragTrap::_Name;
	this->_HitPoints = obj.FragTrap::_HitPoints;
	this->_EnergyPoints = obj.ScavTrap::_EnergyPoints;
	this->_AttackDamage = obj.FragTrap::_AttackDamage;
	return (*this);
}

DiamondTrap::DiamondTrap(DiamondTrap &obj)
{
	*this = obj;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_Name << "   ClapTrap name: " << this->FragTrap::_Name << std::endl;
}