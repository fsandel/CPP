/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:52:06 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:39:57 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
  Harl harl;

  harl.complain("debug");
  harl.complain("info");
  harl.complain("warning");
  harl.complain("error");
  harl.complain("to bad");

  return (0);
}