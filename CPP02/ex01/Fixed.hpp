/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:48:49 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/14 13:30:56 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &obj);
		Fixed& operator=(const Fixed& other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		Fixed(const int num); //Int constructor
		Fixed(const float i); //Float contructor
		int		toInt(void) const; //convert to int
		float	toFloat(void) const; //convert to float
	private:
		int					_fixed_num_value;
		static const int	_fract_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj); //stream operator overload