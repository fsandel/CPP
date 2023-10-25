/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:27:56 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:49:35 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {}

Ice::Ice(Ice const& obj) { *this = obj; }

Ice::~Ice() {}

Ice& Ice::operator=(const Ice&) { return *this; }

void* Ice::operator new(std::size_t size) { return nullptr; }

AMateria* Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}
