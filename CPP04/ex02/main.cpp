/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:09:31 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/30 11:33:39 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//Animal animal;
	
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
