/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:42:55 by fsandel           #+#    #+#             */
/*   Updated: 2023/04/03 15:10:09 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interface.h"

int	main_in(void)
{
	ICharacter* me = new Character("Frank");
	ICharacter* nother = new Character("Someone else");
	AMateria *cure2 = new Cure();
	cure2->clone();
	me->equip(cure2);
	me->use(0, *nother);
		delete me;
	delete nother;
	return (0);
}

int	main(void)
{
	main_in();
	//system("leaks a.out");
}