/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:27:49 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:49:23 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria() { this->_type = "cure"; }

Cure::~Cure() {}

Cure& Cure::operator=(const Cure&) { return *this; }

Cure::Cure(const Cure& obj) { *this = obj; }

AMateria* Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
