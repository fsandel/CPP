/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:02:43 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:50:53 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "IMateriaSource.hpp"

class IMateriaSource;
class AMateria;

class MateriaSource : public IMateriaSource {
 public:
  MateriaSource();
  ~MateriaSource();
  MateriaSource(MateriaSource const& obj);
  MateriaSource& operator=(const MateriaSource& obj);

  void learnMateria(AMateria*);
  AMateria* createMateria(std::string const& type);

 private:
  AMateria* _learned[4];

};