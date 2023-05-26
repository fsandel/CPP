/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:48:49 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:41:28 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cmath>
#include <iostream>

class Fixed {
 public:
  Fixed();
  Fixed(const int num);
  Fixed(float i);
  ~Fixed();
  Fixed(const Fixed& obj);
  Fixed& operator=(const Fixed& other);
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

  bool operator<(const Fixed& r) const;   // < overload
  bool operator>(const Fixed& r) const;   // > overload
  bool operator>=(const Fixed& r) const;  // >= overload
  bool operator<=(const Fixed& r) const;  // <= overload
  bool operator==(const Fixed& r) const;  // == overload
  bool operator!=(const Fixed& r) const;  // != overload

  Fixed operator+(const Fixed& r);  // + overload
  Fixed operator-(const Fixed& r);  // - overload
  Fixed operator*(const Fixed& r);  // * overload
  Fixed operator/(const Fixed& r);  // / overload

  Fixed& operator++();    // ++obj overload
  Fixed operator++(int);  // obj++ overload
  Fixed& operator--();    // --obj overload
  Fixed operator--(int);  // obj++ overload

  static Fixed& min(Fixed& l, Fixed& r);                    // min overload
  static const Fixed& min(const Fixed& l, const Fixed& r);  // min overload
  static Fixed& max(Fixed& l, Fixed& r);                    // max overload
  static const Fixed& max(const Fixed& l, const Fixed& r);  // max overload

 private:
  int _fixed_num_value;
  static const int _fract_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);