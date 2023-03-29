/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:30 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/17 09:11:46 by fsandel          ###   ########.fr       */
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
		~Cat();
		Cat(const Cat &obj);
		Cat& operator=(const Cat& obj);

		void	addIdea(std::string idea);
		void	listIdeas(void);
	private:
		Brain*	_brain;
};