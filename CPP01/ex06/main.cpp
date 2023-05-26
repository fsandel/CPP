/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:52:06 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:40:18 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
  Harl harl;

  if (argc == 1) {
    std::cout << "Harl needs some arguments to complain" << std::endl;
    return (-1);
  }
  if (argc > 2) {
    std::cout << "Harl can't deal with so many arguments" << std::endl;
    return (-2);
  }
  harl.complain(argv[1]);
  return (0);
}