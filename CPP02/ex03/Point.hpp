/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:46:34 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/14 20:03:36 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const Fixed x, const Fixed y);
		~Point();
		Point(Point const &obj);
		Point& operator=(const Point& obj);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

		void	display() const;
		bool operator==(const Point& r) const; // == overload

	private:
		Fixed const _x;
		Fixed const _y;
};