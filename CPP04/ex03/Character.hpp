/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:42:55 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/17 18:37:02 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "interface.h"

class ICharacter;

class Character: public ICharacter
{
	public:
		Character();
		Character(std::string name);
		~Character();
		Character(Character const &obj);
		Character& operator=(const Character& obj);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:

};