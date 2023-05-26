/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:30 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:47:47 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include "animal.h"

class Cat : public Animal {
 public:
  Cat();
  virtual ~Cat();
  Cat(const Cat& obj);
  Cat& operator=(const Cat& obj);

  void makeSound(void) const;
  void addIdea(std::string idea);
  void listIdeas(void);
  void printPTR(void) const;

 private:
  Brain* _brain;
};