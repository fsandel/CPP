/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:49:00 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:41:42 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed area(Point const p1, Point const p2, Point const p3) {
  Fixed a1 = p1.getX() * (p2.getY() - p3.getY());
  Fixed a2 = p2.getX() * (p3.getY() - p1.getY());
  Fixed a3 = p3.getX() * (p1.getY() - p2.getY());
  Fixed a = a1 + a2 + a3;
  if (a > 0)
    return (a);
  else
    return (Fixed(-1) * a);
}

bool cross(Point const p1, Point const p2, Point const c) {
  Fixed dxc = c.getX() - p1.getX();
  Fixed dyc = c.getY() - p1.getY();

  Fixed dxl = p2.getX() - p1.getX();
  Fixed dyl = p2.getY() - p1.getY();

  Fixed cross = dxc * dyl - dyc * dxl;

  if (cross != 0)
    return (false);
  else
    return (true);
}

bool bsp(Point const a, Point const b, Point const c, Point const p) {
  Fixed area1 = area(a, b, p);
  Fixed area2 = area(b, c, p);
  Fixed area3 = area(a, c, p);
  Fixed area_full = area(a, b, c);

  if (p == a || p == b || p == c)  // check if point is on corner
    return (false);

  if (cross(a, b, p) || cross(a, c, p) ||
      cross(b, c, p))  // check if point is on line
    return (false);

  return ((area1 + area2 + area3) <=
          area_full);  // if point is outside: partial area is > than total
}