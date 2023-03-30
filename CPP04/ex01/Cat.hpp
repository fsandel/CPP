/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:30 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/30 11:13:54 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "animal.h"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &obj);
		Cat& operator=(const Cat& obj);

		void	makeSound(void) const;
		void	addIdea(std::string idea);
		void	listIdeas(void);
		void	printPTR(void) const;
	private:
		Brain*	_brain;
};