/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:27:40 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:49:11 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class ICharacter;

class AMateria {
 public:
  AMateria();
  virtual ~AMateria();
  AMateria(AMateria const& obj);
  AMateria& operator=(const AMateria& obj);

  std::string const& getType() const;

  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);

 protected:
  std::string _type;
};


// class AMateria2
// {
// protected:
// public:
// AMateria(std::string const & type);
// std::string const & getType() const; //Returns the materia type
// virtual AMateria* clone() const = 0;
// virtual void use(ICharacter& target);
// };