/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:30:05 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/29 14:38:41 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap CP1("Frank");
	ClapTrap CP2("John");
	ClapTrap CP3("Bob");
	ClapTrap CP4;

	CP1.attack("John");
	CP2.takeDamage(0);
	CP3.attack("Trashcan");

	CP3.takeDamage(20);
	CP3.attack("Trashcan");
	CP3.beRepaired(10);

	int	i = 0;
	while (i++ < 15)
		CP2.attack("John");
	CP2.beRepaired(2);
	CP1.takeDamage(0);

	CP1.takeDamage(0);
	CP1.beRepaired(5);
	CP1.takeDamage(0);

	CP4.attack("Nothing");
	CP4.takeDamage(1);
	CP4.beRepaired(2);
	return (0);
}
