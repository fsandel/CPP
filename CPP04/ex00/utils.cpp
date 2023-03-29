/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:59:49 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/16 11:00:51 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

void	print(std::string str, std::string color)
{
	std::cout << color << str << DEFAULT << std::endl;
}