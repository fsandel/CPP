/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:42:55 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:51:19 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character/Character.hpp"
#include "Character/ICharacter.hpp"
#include "Floor/Floor.hpp"
#include "Materia/AMateria.hpp"
#include "Materia/Cure.hpp"
#include "Materia/Ice.hpp"

int main_in(void) {
  ICharacter* me = new Character("Frank");
  ICharacter* nother = new Character("Someone else");
  AMateria* cure2 = new Cure();
  cure2->clone();
  me->equip(cure2);
  me->use(0, *nother);
  delete me;
  delete nother;
  return (0);
}

int main(void) {
  main_in();
  // system("leaks a.out");
}