/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:48:24 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/14 13:41:53 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
/*
int main(void)
{
	Fixed a(2);
	Fixed const b(3.5f);
	Fixed c(4);
	Fixed const d(4);
	
	std::cout << "a<b " << (a<b) <<std::endl;
	std::cout << "a>b " << (a>b) <<std::endl;
	std::cout << "a>=b " << (a>=b) <<std::endl;
	std::cout << "a<=b " << (a<=b) <<std::endl;
	std::cout << "a==b " << (a==b) <<std::endl;
	std::cout << "a!=b " << (a!=b) <<std::endl;
	std::cout << std::endl;
	std::cout << "a+b " << (a+b) <<std::endl;
	std::cout << "a-b " << (a-b) <<std::endl;
	std::cout << "a*b " << (a*b) <<std::endl;
	std::cout << "a/b " << (a/b) <<std::endl;
	std::cout << std::endl;
	std::cout << "a " << (a) <<std::endl;
	std::cout << "a++ " << (a++) <<std::endl;
	std::cout << "a " << (a) <<std::endl;
	std::cout << "++a " << (++a) <<std::endl;
	std::cout << "a-- " << (a--) <<std::endl;
	std::cout << "a " << (a) <<std::endl;
	std::cout << "--a " << (--a) <<std::endl;
	std::cout << "a " << (a) <<std::endl;
	std::cout << std::endl;
	std::cout << "min(a, b) " << Fixed::min(a, b) << std::endl;
	std::cout << "min(a, b) " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, c) " << Fixed::max(a, c) << std::endl;
	std::cout << "min(b, d) " << Fixed::max(b, d) << std::endl;
	return 0;
}

*/

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}

