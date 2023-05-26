/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:57:43 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:38:37 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void) {
  Zombie* zombie_horde;

  int N = 5;
  int i = 0;
  zombie_horde = zombieHorde(N, "lilTommy");
  while (i < N) {
    std::cout << "ZombieNo: " << i << " ";
    zombie_horde->announce();
    i++;
  }
  delete[] zombie_horde;
  system("leaks zombie");
  return (0);
}