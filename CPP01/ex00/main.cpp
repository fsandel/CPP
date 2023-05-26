/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:57:43 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:38:07 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void) {
  Zombie* zombie_allocated = newZombie("Frank");

  zombie_allocated->announce();
  delete zombie_allocated;

  randomChump("John");

  Zombie* zombie_allocated2 = newZombie("Frank2");
  zombie_allocated2->announce();
  delete zombie_allocated2;

  return (0);
}
