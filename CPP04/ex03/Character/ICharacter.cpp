/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:46:17 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:48:44 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() {}

ICharacter::ICharacter(std::string name) : _name(name) {}

ICharacter::~ICharacter() {}

ICharacter& ICharacter::operator=(const ICharacter& obj) {
  int i = 0;
  while (i < 4) delete this->slot[i++];
  i = 0;
  while (i < 4) {
    this->slot[i] = obj.slot[i];
    i++;
  }
  return (*this);
}

ICharacter::ICharacter(ICharacter const& obj) { *this = obj; }

// const std::string	ICharacter::getName(void) const
// {
// 	return (this->_name);
// }

std::string const& ICharacter::getName() const { return (this->_name); }

void ICharacter::equip(AMateria* m) { (void)m; }

void ICharacter::unequip(int idx) { (void)idx; }

void ICharacter::use(int idx, ICharacter& target) {
  (void)idx;
  (void)target;
}