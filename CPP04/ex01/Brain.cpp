/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:22:06 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:47:07 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
  print("Brain constructor", YELLOW);
  this->i = 0;
}

Brain::~Brain() { print("Brain destructor", YELLOW); }

Brain& Brain::operator=(const Brain& obj) {
  int c = 0;
  print("Brain copy assignment overload", YELLOW);
  while (c < CAPACITY) {
    this->ideas[c] = obj.ideas[c];
    c++;
  }
  this->i = obj.i;
  return (*this);
}

Brain::Brain(const Brain& obj) {
  print("Brain copy constructor", YELLOW);
  *this = obj;
}

void Brain::addIdea(std::string idea) {
  if (i < CAPACITY) {
    std::cout << YELLOW << idea << " got added" << DEFAULT << std::endl;
    this->ideas[i++] = idea;
  } else
    std::cout << YELLOW << idea << " can't get added, brain is full" << DEFAULT
              << std::endl;
}

void Brain::listIdeas(void) const {
  int c = 0;
  while (c < this->i)
    std::cout << YELLOW << this->ideas[c++] << DEFAULT << std::endl;
}
