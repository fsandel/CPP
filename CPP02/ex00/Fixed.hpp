/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:48:49 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/14 13:22:16 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
	public:
		Fixed(); //constructor
		~Fixed(); //destructor
		Fixed(const Fixed &obj); //copy constructor
		Fixed& operator=(const Fixed& other); //copy assignment constructor
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_fixed_num_value;
		static const int	_fract_bits = 8;
};