/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:59:03 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:38:24 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() { std::cout << this->_name << " deleted\n"; }

void Zombie::announce(void) {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."
            << "\n";
}
