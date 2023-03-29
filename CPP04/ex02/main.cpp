/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:09:31 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/17 09:45:27 by fsandel          ###   ########.fr       */
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
	//Animal animal;
	Dog dog;
	Cat cat;
	dog.makeSound();
	cat.makeSound();
return 0;
}
