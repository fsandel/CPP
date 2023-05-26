/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:27:53 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 17:04:02 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
 public:
  Cure();
  ~Cure();
  Cure(const Cure& obj);
  Cure& operator=(const Cure& obj);

  AMateria* clone() const;
  void use(ICharacter& target);

 private:
};