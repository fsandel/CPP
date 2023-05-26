/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:29:18 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:39:20 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB(void) {}

void HumanB::attack(void) {
  if (this->_weapon)
    std::cout << this->_name << " attacks with their "
              << this->_weapon->getType() << std::endl;
  else
    std::cout << this->_name << " attacks with their bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) { _weapon = &weapon; }