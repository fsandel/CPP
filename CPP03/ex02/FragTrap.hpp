/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:39:03 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:44:10 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
  FragTrap();
  FragTrap(std::string name);
  ~FragTrap();
  FragTrap(FragTrap const& obj);
  FragTrap& operator=(const FragTrap& obj);

  void highFivesGuys();

 private:
};
