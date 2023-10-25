/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:46:21 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:48:51 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "../Materia/AMateria.hpp"

class AMateria;

class ICharacter {
 public:
  ICharacter();
  ICharacter(std::string name);
  ICharacter(ICharacter const& obj);
  ICharacter& operator=(const ICharacter& obj);
  virtual ~ICharacter();

  virtual std::string const& getName() const = 0;
  virtual void equip(AMateria* m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter& target) = 0;

 protected:
  AMateria* slot[4];
  std::string _name;
};
