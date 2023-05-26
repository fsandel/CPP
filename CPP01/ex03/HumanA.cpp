/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:29:01 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:39:10 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
    : _name(name), _weapon(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void) {
  std::cout << this->_name << " attacks with their " << this->_weapon.getType()
            << "\n";
}

void HumanA::setWeapon(Weapon& weapon) { this->_weapon = weapon; }
