/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:15 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:47:30 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() { print("Animal constructor", BLUE); }

Animal::~Animal() { print("Animal destructor", BLUE); }

Animal& Animal::operator=(const Animal& obj) {
  this->type = obj.type;
  return (*this);
}

Animal::Animal(Animal& obj) { *this = obj; }

void Animal::makeSound(void) const { print("Animal sounds", BLUE); }

std::string Animal::getType(void) const { return (this->type); }