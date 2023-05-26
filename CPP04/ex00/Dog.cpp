/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:35 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 17:08:21 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
  print("Dog constructor", RED);
  this->type = "Dog";
}

Dog::~Dog() { print("Dog destructor", RED); }

Dog& Dog::operator=(const Dog& obj) {
  this->type = obj.type;
  return (*this);
}

Dog::Dog(Dog& obj) : Animal(obj) { *this = obj; }

void Dog::makeSound(void) const { print("Dog sounds", RED); }
