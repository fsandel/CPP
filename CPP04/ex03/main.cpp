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
  Character me("me");
  AMateria* tmp;
  tmp = src->createMateria("ice");
  me.equip(tmp);
  Character bob("bob");
  bob = me;
  bob.use(0, bob);
  delete src;
  return 0;
}
