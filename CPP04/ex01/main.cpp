/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:09:31 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/17 09:27:55 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// std::cout << "Creating Main Dog" << std::endl;
	// Dog dog;
	// std::cout << "Giving Dog idea" << std::endl;
	// dog.addIdea("Food");
	// dog.listIdeas();
	// std::cout << "Creating second Dog" << std::endl;
	// Dog dog2;
	// std::cout << "Copy 2nd dog from first using assignment" << std::endl;
	// dog2 = dog;
	// std::cout << "Creating 3rd dog using copy constructor from first" << std::endl;
	// Dog dog3(dog);
	// std::cout << "comparing brain from all 3 dogs to check for deep copy" << std::endl;
	// std::cout << "dog 3 now listing brain" << std::endl;
	// dog3.listIdeas();
	// std::cout << "dog 2 now listing brain" << std::endl;
	// dog2.listIdeas();
	// std::cout << "dog now listing brain" << std::endl;
	// dog.listIdeas();
	// std::cout << std::endl << std::endl;
	
	// std::cout << "Creating Main Cat" << std::endl;
	// Cat cat;
	// std::cout << "Giving Cat idea" << std::endl;
	// cat.addIdea("Food");
	// cat.listIdeas();
	// std::cout << "Creating second Cat" << std::endl;
	// Cat cat2;
	// std::cout << "Copy 2nd Cat from first using assignment" << std::endl;
	// cat2 = cat;
	// std::cout << "Creating 3rd Cat using copy constructor from first" << std::endl;
	// Cat cat3(cat);
	// std::cout << "comparing brain from all 3 Cats to check for deep copy" << std::endl;
	// std::cout << "Cat 3 now listing brain" << std::endl;
	// cat3.listIdeas();
	// std::cout << "Cat 2 now listing brain" << std::endl;
	// cat2.listIdeas();
	// std::cout << "Cat now listing brain" << std::endl;
	// cat.listIdeas();

	// std::cout << std::endl << std::endl;

	std::cout << "creating zoo" << std::endl;
	Animal* zoo[10];
	int	i =0;
	std::cout << "filling zoo" << std::endl;
	while (i < 5)
		zoo[i++] = new Dog;
	while (i < 10)
		zoo[i++] = new Cat;
	std::cout << "deleteing zoo" << std::endl;
	i = 0;
	while (i < 10)
		delete zoo[i++];
	system("leaks a.out");
return 0;
}
