/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:39:11 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:44:48 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class ClapTrap;

FragTrap::FragTrap() : ClapTrap() {
  std::cout << "Default FragTrap Constructor got called" << std::endl;
  this->_AttackDamage = 30;
  this->_EnergyPoints = 100;
  this->_HitPoints = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  std::cout << "Name FragTrap Constructor got called on " << name << std::endl;
  this->_AttackDamage = 30;
  this->_EnergyPoints = 100;
  this->_HitPoints = 100;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap Destructor got called on " << this->_Name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) {
  std::cout << "FragTrap Assign operator got called" << std::endl;
  this->_AttackDamage = obj._AttackDamage;
  this->_EnergyPoints = obj._EnergyPoints;
  this->_HitPoints = obj._HitPoints;
  this->_Name = obj._Name;
  return (*this);
}

FragTrap::FragTrap(FragTrap const& obj) : ClapTrap(obj) {
  std::cout << "FragTrap copy constructor got called" << std::endl;
  *this = obj;
}

void FragTrap::highFivesGuys() {
  std::cout << "FragTrap " << this->_Name
            << " is in desperate needs of High Fives" << std::endl;
}
