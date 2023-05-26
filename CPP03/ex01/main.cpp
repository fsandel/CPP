/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:30:05 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:43:40 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  ScavTrap SC1("John");

  SC1.attack("Trash");
  SC1.takeDamage(5);
  SC1.beRepaired(100);
  int i = 0;
  while (i < 50) {
    std::cout << "  ";
    SC1.attack("Nothing");
    i++;
  }
  SC1.guardGate();
  return (0);
}
