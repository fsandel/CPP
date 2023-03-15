/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:55:22 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/14 09:20:48 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		static Zombie*	newZombie(std::string name);
		static void	randomChump(std::string name);
	private:
		std::string _name;
};
