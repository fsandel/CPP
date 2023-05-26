/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:39:11 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:43:44 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  std::cout << "Default ScavTrap Constructor got called" << std::endl;
  this->_AttackDamage = 20;
  this->_EnergyPoints = 50;
  this->_HitPoints = 100;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  std::cout << "Name ScavTrap Constructor got called on " << name << std::endl;
  this->_AttackDamage = 20;
  this->_EnergyPoints = 50;
  this->_HitPoints = 100;
}

void ScavTrap::attack(const std::string& target) {
  if (this->_HitPoints <= 0) {
    std::cout << "ScavTrap " << this->_Name << " is dead and can't attack!"
              << std::endl;
    return;
  }
  if (this->_EnergyPoints > 0) {
    std::cout << "ScavTrap " << this->_Name << " attacks " << target
              << ", causing " << this->_AttackDamage << " points of damage!"
              << std::endl;
    this->_EnergyPoints--;
  } else
    std::cout << "ScavTrap " << this->_Name
              << " doesnt have enough Energy to attack!" << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor got called on " << this->_Name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) {
  std::cout << "ScavTrap Assign operator got called" << std::endl;
  this->_AttackDamage = obj._AttackDamage;
  this->_EnergyPoints = obj._EnergyPoints;
  this->_HitPoints = obj._HitPoints;
  this->_Name = obj._Name;
  return (*this);
}

ScavTrap::ScavTrap(ScavTrap const& obj) : ClapTrap(obj) {
  std::cout << "ScavTrap copy constructor got called" << std::endl;
  *this = obj;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << this->_Name << " is now in Gate Keeper Mode"
            << std::endl;
}
