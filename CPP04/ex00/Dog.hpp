/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:39 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/30 11:09:51 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "animal.h"
#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog &obj);
		Dog& operator=(const Dog& obj);

		void	makeSound(void) const;
	private:

};