/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:48:24 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/14 20:07:16 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

void	bsp_wrapper(Point const a, Point const b, Point const c, Point const point)
{
	if (bsp(a, b, c, point) == true)
	{
		point.display();
		std::cout << "Point in triangle" << std::endl;
	}
	else
	{
		point.display();
		std::cout << "not in triangle" << std::endl;
	}
	std::cout << std::endl;
}

int main(void)
{
	Point const a(-4, -2);
	Point const b(4, -2);
	Point const c(0, 4);

	Point const p0(0, 0);
	Point const p1(-3.5f, -1.5f);
	Point const p2(3.5f, -1.5f);
	Point const p3(0, 3.5f);
	Point const p4(40, 40);

	bsp_wrapper(a, b, c, p0);
	bsp_wrapper(a, b, c, p1);
	bsp_wrapper(a, b, c, p2);
	bsp_wrapper(a, b, c, p3);
	bsp_wrapper(a, b, c, a);
	bsp_wrapper(a, b, c, b);
	bsp_wrapper(a, b, c, c);
	bsp_wrapper(a, b, c, p4);

	//std::cout << Fixed::max3(a.getX(), b.getX(), c.getX()) << std::endl;
	//bsp(a, b, c, p4);

	Point const a1(0, 0);
	Point const b1(2, 2);
	Point const c1(2, 0);
	Point const p5(1, 1);
	bsp_wrapper(a1, b1, c1, p5);
	return 0;
}
