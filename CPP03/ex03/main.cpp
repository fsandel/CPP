/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:30:05 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/29 16:04:32 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap Trap("Frank");
	Trap.attack("Trash");
	Trap.ClapTrap::attack("Nothing");
	Trap.beRepaired(0);
	Trap.takeDamage(0);
	Trap.whoAmI();
	Trap.guardGate();
	Trap.highFivesGuys();
	return (0);
}
