/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:29:18 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:44:43 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
 public:
  DiamondTrap();
  DiamondTrap(std::string name);
  ~DiamondTrap();
  DiamondTrap(DiamondTrap const& obj);
  DiamondTrap& operator=(const DiamondTrap& obj);

  void whoAmI();

  using ScavTrap::attack;

 private:
  std::string _Name;
};
