/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:22 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/16 14:54:18 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "animal.h"

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal &obj);
		Animal& operator=(const Animal& obj);

		void	makeSound(void) const;
		std::string	getType(void) const;

	protected:
		std::string type;
};
//comment