/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:54:44 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:37:39 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static std::string make_loud(std::string argument) {
  unsigned long i;

  i = 0;
  while (i < argument.size()) {
    argument.at(i) = std::toupper(argument.at(i));
    i++;
  }
  return (argument);
}

int main(int argc, char *argv[]) {
  int arguments;

  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return (0);
  }
  arguments = 1;
  while (arguments < argc) std::cout << make_loud(argv[arguments++]);
  std::cout << "\n";
  return (0);
}
