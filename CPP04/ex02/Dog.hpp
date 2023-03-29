/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:39 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/17 13:21:07 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "animal.h"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &obj);
		Dog& operator=(const Dog& obj);

		void	addIdea(std::string idea);
		void	listIdeas(void);
		//using Animal::makeSound;
		void	makeSound(void) const;

	private:
		Brain*	_brain;
};