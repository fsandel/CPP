/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:27:45 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:49:07 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() { this->_type = "base"; }

AMateria::AMateria(const AMateria& obj) { this->_type = obj._type; }

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria&) { return *this; }

AMateria::AMateria(std::string const& type) { this->_type = type; }

std::string const& AMateria::getType() const { return this->_type; }

void AMateria::use(ICharacter&) {}
