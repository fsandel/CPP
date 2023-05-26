/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:30:43 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:43:03 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap {
 public:
  ClapTrap();
  ClapTrap(std::string name);
  ~ClapTrap();
  ClapTrap(ClapTrap const& obj);
  ClapTrap& operator=(const ClapTrap& obj);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

 private:
  std::string _Name;
  int _HitPoints;
  int _EnergyPoints;
  int _AttackDamage;
};
