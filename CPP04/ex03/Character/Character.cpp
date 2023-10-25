/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:42:51 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:48:20 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
  for (int i = 0; i < 4; i++) this->slot[i] = 0;
}

Character::Character(std::string name) { this->_name = name; }

Character::~Character() {
  for (int i = 0; i < 4; i++) delete this->slot[i];
}

Character& Character::operator=(const Character& obj) {
  for (int i = 0; i < 4; i++) {
    delete this->slot[i];
    if (this->slot[i]) this->slot[i] = obj.slot[i]->clone();
  };
  return (*this);
}

Character::Character(Character const& obj) { *this = obj; }

std::string const& Character::getName() const { return (this->_name); }

void Character::equip(AMateria* m) {
  if (!m) return;
  for (int i = 0; i < 4; i++)
    if (!slot[i]) return (slot[i] = m->clone(), void(0));
}

void Character::unequip(int idx) {
  if (idx >= 4 || idx < 0) {
    std::cout << "Index is out of range" << std::endl;
    return;
  }
  if (!this->slot[idx]) {
    std::cout << "There is nothing equipped in slot " << idx << std::endl;
    return;
  }
  delete slot[idx];
  this->slot[idx] = NULL;
  std::cout << "Successfully unequipped " << slot[idx]->getType() << std::endl;
}

void Character::use(int idx, ICharacter& target) {
  if (idx > 3 || idx < 0) {
    std::cout << "Index is out of range" << std::endl;
    return;
  }
  if (!this->slot[idx]) {
    std::cout << "There is nothing equipped in slot " << idx << std::endl;
    return;
  }
  this->slot[idx]->use(target);
}