/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:46:27 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:42:20 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include "Fixed.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y) {}

Point::~Point() {}

Point& Point::operator=(const Point& obj) {
  (void)obj;
  return (*this);
}

Point::Point(Point const& obj) : _x(obj._x), _y(obj._y) {}

Fixed Point::getX(void) const { return (this->_x); }

Fixed Point::getY(void) const { return (this->_y); }

void Point::display() const {
  std::cout << "x: " << this->getX() << std::endl;
  std::cout << "y: " << this->getY() << std::endl;
}

bool Point::operator==(const Point& r) const {
  return (this->_x == r._x && this->_y == r._y);
}