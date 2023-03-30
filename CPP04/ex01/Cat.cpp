/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:26 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/30 11:10:23 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal()
{
	print("Cat constructor", GREEN);
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	print("Cat destructor", GREEN);
	delete this->_brain;
}

Cat& Cat::operator=(const Cat&obj)
{
	print("Cat copy assignment overload", GREEN);
	*(this->_brain) = *(obj._brain);
	this->type = obj.type;
	return (*this);
}

Cat::Cat(const Cat &obj)
{
	print("Cat copy constructor", GREEN);
	this->_brain = new Brain(*(obj._brain));
	this->type = obj.type;
}

void	Cat::makeSound(void) const
{
	print("Cat sounds", GREEN);
}

void	Cat::addIdea(std::string idea)
{
	this->_brain->addIdea(idea);
}

void	Cat::listIdeas(void)
{
	this->_brain->listIdeas();
}

void	Cat::printPTR(void) const
{
	std::cout << GREEN << this->_brain << DEFAULT << std::endl;
}
