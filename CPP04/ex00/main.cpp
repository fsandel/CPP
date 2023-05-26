/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:09:31 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:46:17 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "animal.h"

int main() {
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();  // will output the cat sound!
  j->makeSound();
  meta->makeSound();

  delete meta;
  delete j;
  delete i;

  const WrongAnimal* meta2 = new WrongAnimal();
  const Animal* j2 = new Dog();
  const WrongAnimal* i2 = new WrongCat();
  std::cout << j2->getType() << " " << std::endl;
  std::cout << i2->getType() << " " << std::endl;
  i2->makeSound();  // will output the wrong animal sound!
  j2->makeSound();
  meta2->makeSound();

  delete meta2;
  delete j2;
  delete i2;
  std::cout << "my own tests start here" << std::endl;
  Animal animal;
  WrongCat wrongcat;
  Cat cat;

  animal.makeSound();
  wrongcat.makeSound();
  cat.makeSound();
  // system("leaks a.out");
  return 0;
}
