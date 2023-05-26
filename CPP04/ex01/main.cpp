/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:09:31 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:47:22 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "animal.h"

int main() {
  std::cout << "Creating Main Dog" << std::endl;
  Dog dog;
  std::cout << "Giving Dog idea" << std::endl;
  dog.addIdea("Food");
  std::cout << "Creating second Dog" << std::endl;
  Dog dog2;
  std::cout << "Copy 2nd dog from first using assignment" << std::endl;
  dog2 = dog;
  std::cout << "Add second idea to first dog" << std::endl;
  dog.addIdea("Even more Food");
  std::cout << "comparing brain from both dogs to check for deep copy"
            << std::endl;
  std::cout << "dog now listing brain" << std::endl;
  dog.printPTR();
  dog.listIdeas();
  std::cout << "dog 2 now listing brain" << std::endl;
  dog2.printPTR();
  dog2.listIdeas();
  std::cout << std::endl << std::endl;

  // std::cout << "Creating Main Cat" << std::endl;
  // Cat cat;
  // std::cout << "Giving Cat idea" << std::endl;
  // cat.addIdea("Food");
  // std::cout << "Creating second Cat" << std::endl;
  // Cat cat2;
  // std::cout << "Copy 2nd Cat from first using assignment" << std::endl;
  // cat2 = cat;
  // std::cout << "Add second idea to first Cat" << std::endl;
  // cat.addIdea("Even more Food");
  // std::cout << "comparing brain from both Cats to check for deep copy" <<
  // std::endl; std::cout << "Cat now listing brain" << std::endl;
  // cat.printPTR();
  // cat.listIdeas();
  // std::cout << "Cat 2 now listing brain" << std::endl;
  // cat2.printPTR();
  // cat2.listIdeas();
  // std::cout << std::endl << std::endl;

  // std::cout << "creating zoo" << std::endl;
  // Animal* zoo[6];
  // int	i = 0;
  // std::cout << "filling zoo" << std::endl;
  // while (i < 3)
  // 	zoo[i++] = new Dog;
  // while (i < 6)
  // 	zoo[i++] = new Cat;
  // std::cout << "deleting zoo" << std::endl;
  // i = 0;
  // while (i < 6)
  // {
  // 	//zoo[i]->makeSound();
  // 	delete zoo[i++];
  // }
  // system("leaks a.out");
  return 0;
}
