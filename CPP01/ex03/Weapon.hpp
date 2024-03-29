/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:30:20 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:39:39 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon {
 public:
  Weapon(void);
  Weapon(std::string type);
  ~Weapon();
  const std::string& getType(void) const;
  void setType(const std::string type);

 private:
  std::string _type;
};
