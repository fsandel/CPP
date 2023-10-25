/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:28:00 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:50:32 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../Character/ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;

class Ice : public AMateria {
 public:
  Ice();
  ~Ice();
  Ice(Ice const& obj);
  Ice& operator=(const Ice& obj);

 private:
};