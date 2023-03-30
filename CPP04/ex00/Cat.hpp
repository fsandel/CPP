/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:30 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/30 11:09:32 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "animal.h"
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(Cat &obj);
		Cat& operator=(const Cat& obj);

		void	makeSound(void) const;
	private:
};