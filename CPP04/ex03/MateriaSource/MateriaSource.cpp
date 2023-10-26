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
  for (int i = 0; i < 4; i++) this->_learned[i] = NULL;
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < 4; i++)
    if (this->_learned[i]) delete this->_learned[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj) {
  for (int i = 0; i < 4; i++) {
    if (this->_learned[i]) delete this->_learned[i];
    if (obj._learned[i])
      this->_learned[i] = obj._learned[i]->clone();
    else
      this->_learned[i] = NULL;
  }
  return (*this);
}

MateriaSource::MateriaSource(MateriaSource const& obj) { *this = obj; }

void MateriaSource::learnMateria(AMateria* materia) {
  for (int i = 0; i < 4; i++) {
    if (!this->_learned[i]) {
      this->_learned[i] = materia;
      return;
    }
    std::cout << "can't learn another Materia" << std::endl;
  }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  for (int i = 0; i < 4; i++) {
    if (this->_learned[i] && this->_learned[i]->getType() == type)
      return (this->_learned[i]->clone());
  }
  std::cout << "Materia is not known" << std::endl;
  return (NULL);
}
