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
#include "MateriaSource/IMateriaSource.hpp"
#include "MateriaSource/MateriaSource.hpp"

int main() {
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  ICharacter* me = new Character("me");
  AMateria* tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);
  delete bob;
  delete me;
  delete src;
  return 0;
}
