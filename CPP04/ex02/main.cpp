/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:09:31 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:47:54 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "animal.h"

int main() {
  // Animal animal;

  Dog dog;
  dog.makeSound();

  Animal *ptr = new Dog();
  ptr->makeSound();
  delete ptr;

  // Cat cat;
  // cat.makeSound();

  // Animal *ptr2 = new Cat();
  // ptr2->makeSound();
  // delete ptr2;
  // system("leaks a.out");
  return 0;
}
