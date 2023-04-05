/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:02:31 by fsandel           #+#    #+#             */
/*   Updated: 2023/04/03 12:45:01 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	int	i = 0;
	while (i < 4)
		this->_learned[i++] = NULL;
}

IMateriaSource::~IMateriaSource()
{
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource&obj)
{
	//add rule for copy assignment constructor
	(void)obj;
	return (*this);
}

IMateriaSource::IMateriaSource(IMateriaSource const &obj)
{
	*this = obj;
}

void learnMateria(AMateria*)
{
}

AMateria* createMateria(std::string const & type)
{
	(void)type;
	return (NULL);
}