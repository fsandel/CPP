/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:02:39 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:50:49 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
  int i = 0;
  while (i < 4) this->_learned[i++] = NULL;
}

MateriaSource::~MateriaSource() {}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj) {
  // add rule for copy assignment constructor
  (void)obj;
  return (*this);
}

MateriaSource::MateriaSource(MateriaSource const& obj) { *this = obj; }

void MateriaSource::learnMateria(AMateria* materia) {
  int i = 0;
  while (i < 4) {
    if (!this->_learned[i]) {
      this->_learned[i] = materia;
      return;
    }
    i++;
  }
  std::cout << "can't learn another Materia" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  int i = 0;
  while (i < 4) {
    if (this->_learned[i]->getType() == type)
      return (this->_learned[i]->clone());
    i++;
  }
  (void)type;
  return (NULL);
}