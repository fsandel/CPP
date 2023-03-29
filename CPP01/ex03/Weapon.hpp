/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:30:20 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/28 10:07:58 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon();
		const std::string&	getType(void) const;
		void		setType(const std::string type);
	private:
		std::string _type;
};
