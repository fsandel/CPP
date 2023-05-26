/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:46:08 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:39:01 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  std::string string = "HI THIS IS BRAIN";
  std::string* stringPTR = &string;
  std::string& stringREF = string;

  std::cout << "address from string:\t\t\t" << &string << "\n";
  std::cout << "address pointed to by stringPTR:\t" << stringPTR << "\n";
  std::cout << "address pointed to by stringREF:\t" << &stringREF << "\n";
  std::cout << "\n";
  std::cout << "the value of string:\t\t\t" << string << "\n";
  std::cout << "the value pointed to by stringPTR:\t" << *stringPTR << "\n";
  std::cout << "the value pointed to by stringREF:\t" << stringREF << "\n";
  return (0);
}