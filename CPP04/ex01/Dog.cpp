/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:35 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 17:09:06 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
  print("Dog constructor", RED);
  this->type = "Dog";
  this->_brain = new Brain();
}

Dog::~Dog() {
  print("Dog destructor", RED);
  delete this->_brain;
}

Dog& Dog::operator=(const Dog& obj) {
  print("Dog copy assignment overload", RED);
  *(this->_brain) = *(obj._brain);
  this->type = obj.type;
  return (*this);
}

Dog::Dog(const Dog& obj) : Animal(obj) {
  print("Dog copy constructor", RED);
  this->_brain = new Brain(*(obj._brain));
  this->type = obj.type;
}

void Dog::makeSound(void) const { print("Dog sounds", RED); }

void Dog::addIdea(std::string idea) { this->_brain->addIdea(idea); }

void Dog::listIdeas(void) { this->_brain->listIdeas(); }

void Dog::printPTR(void) const {
  std::cout << RED << this->_brain << DEFAULT << std::endl;
}
