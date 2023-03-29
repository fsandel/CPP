/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:30:05 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/29 16:03:06 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	FT1("John");

	FT1.attack("Trash");
	FT1.takeDamage(5);
	FT1.beRepaired(100);
	FT1.highFivesGuys();
	return (0);
}
