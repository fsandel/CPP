/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:29:34 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:39:25 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(std::string name);
  ~HumanB();
  void attack(void);
  void setWeapon(Weapon& weapon);

 private:
  std::string _name;
  Weapon* _weapon;
};
