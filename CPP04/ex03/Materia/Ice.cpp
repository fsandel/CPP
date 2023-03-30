/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:27:56 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/17 15:27:58 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
}

Ice::~Ice()
{
}

Ice& Ice::operator=(const Ice&obj)
{
	//add rule for copy assignment constructor
	return (*this);
}

Ice::Ice(Ice const &obj)
{
	*this = obj;
}
