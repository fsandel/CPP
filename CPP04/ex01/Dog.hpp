/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:39 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/30 11:14:10 by fsandel          ###   ########.fr       */
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
		virtual ~Dog();
		Dog(const Dog &obj);
		Dog& operator=(const Dog& obj);

		void	makeSound(void) const;
		void	addIdea(std::string idea);
		void	listIdeas(void);
		void	printPTR(void) const;
	private:
		Brain*	_brain;
};