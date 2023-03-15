/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:57:43 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/14 11:03:48 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_horde;

	int		N = 5;
	int		i = 0;
	zombie_horde = Zombie::zombieHorde(N, "lilTommy");
	while (i < N)
	{
		std::cout << "ZombieNo: " << i << " ";
		zombie_horde->announce();
		i++;
	}
	delete[] zombie_horde;
	system("leaks zombie");
	return (0);
}