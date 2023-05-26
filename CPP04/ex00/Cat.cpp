/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:26 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:45:56 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
  this->type = "Cat";
  print("Cat constructor", GREEN);
}

Cat::~Cat() { print("Cat destructor", GREEN); }

Cat& Cat::operator=(const Cat& obj) {
  this->type = obj.type;
  return (*this);
}

Cat::Cat(Cat& obj) { *this = obj; }

void Cat::makeSound(void) const { print("Cat sounds", GREEN); }
