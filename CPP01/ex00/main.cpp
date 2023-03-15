/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:57:43 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/14 09:24:58 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie_allocated = Zombie::newZombie("Frank");

	zombie_allocated->announce();

	delete zombie_allocated;
	Zombie::randomChump("John");

	Zombie*	zombie_allocated2 = Zombie::newZombie("Frank2");
	zombie_allocated2->announce();
	delete zombie_allocated2;
	return (0);
}
