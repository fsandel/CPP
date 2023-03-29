/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:42:55 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/17 18:33:24 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interface.h"

int	main(void)
{
	ICharacter* me = new Character("Frank");
	Cure cure1;
	AMateria *cure2 = cure1.clone();
	std::cout << cure2->getType() << std::endl;
	std::cout << "main running" << std::endl;
	std::cout << me->getName() << std::endl;
	return (0);
}