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

Character::Character() : _name("noname") {
  for (int i = 0; i < 4; i++) {
    this->slot[i] = NULL;
  }
}

Character::Character(std::string name) : _name(name) {
  for (int i = 0; i < 4; i++) {
    this->slot[i] = NULL;
  }
}

Character::~Character() {
  for (int i = 0; i < 4; i++)
    if (this->slot[i]) delete this->slot[i];
}

Character& Character::operator=(const Character& obj) {
  this->_name = obj._name;
  for (int i = 0; i < 4; ++i) {
    if (this->slot[i] != NULL) {
      delete this->slot[i];
      this->slot[i] = NULL;
    }
    if (obj.slot[i]) {
      this->slot[i] = obj.slot[i]->clone();
    } else {
      this->slot[i] = NULL;
    }
  }
  return *this;
}

Character::Character(Character const& obj) { *this = obj; }

std::string const& Character::getName() const { return (this->_name); }

void Character::equip(AMateria* m) {
  if (!m) return;
  for (int i = 0; i < 4; i++) {
    if (!slot[i]) {
      slot[i] = m->clone();
      return;
    }
  }
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
  if (this->slot[idx] == NULL) {
    std::cout << "There is nothing equipped in slot " << idx << std::endl;
    return;
  }
  this->slot[idx]->use(target);
}
