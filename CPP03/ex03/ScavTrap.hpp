/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:39:03 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:45:15 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 public:
  ScavTrap();
  ScavTrap(std::string name);
  ~ScavTrap();
  ScavTrap(ScavTrap const& obj);
  ScavTrap& operator=(const ScavTrap& obj);

  void attack(const std::string& target);
  void guardGate();

 private:
};
