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
  int i = 0;
  while (i < 4) this->slot[i++] = NULL;
}

Character::Character(std::string name) { this->_name = name; }

Character::~Character() {
  int i = 0;
  while (i < 4) {
    if (this->slot[i]) delete this->slot[i];
    i++;
  }
}

Character& Character::operator=(const Character& obj) {
  int i = 0;
  while (i < 4) {
    if (this->slot[i]) delete this->slot[i];
    i++;
  }
  i = 0;
  while (i < 4) {
    if (obj.slot[i]) this->slot[i] = obj.slot[i]->clone();
    i++;
  }
  return (*this);
}

Character::Character(Character const& obj) { *this = obj; }

std::string const& Character::getName() const { return (this->_name); }

void Character::equip(AMateria* m) {
  int i = 0;
  while (i < 4) {
    if (!slot[i]) {
      slot[i] = m;
      return;
    }
    i++;
  }
}

void Character::unequip(int idx) {
  if (idx > 3 || idx < 0) {
    std::cout << "Index is out of range" << std::endl;
    return;
  }
  if (!this->slot[idx]) {
    std::cout << "There is nothing equipped in slot " << idx << std::endl;
    return;
  }
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