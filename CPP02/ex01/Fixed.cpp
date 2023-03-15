/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:48:44 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/14 13:44:15 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed():_fixed_num_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed&other)
{
	std::cout << "Copy assignmend constructor called" << std::endl;
	this->_fixed_num_value = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_num_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_num_value = raw;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

Fixed::Fixed(const float i)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_num_value = roundf(i *( 1 << this->_fract_bits));
}

Fixed::Fixed(const int i):_fixed_num_value(i << this->_fract_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixed_num_value / (float)(1 << this->_fract_bits));

}

int		Fixed::toInt(void) const
{
	return (this->_fixed_num_value>>this->_fract_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}