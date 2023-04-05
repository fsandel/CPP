/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:02:28 by fsandel           #+#    #+#             */
/*   Updated: 2023/04/03 15:33:19 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "../Materia/AMateria.hpp"
//class AMateria;

class IMateriaSource
{
	public:
		IMateriaSource();
		virtual ~IMateriaSource();
		IMateriaSource(IMateriaSource const &obj);
		IMateriaSource& operator=(const IMateriaSource& obj);

		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
	protected:
		AMateria *_learned[4];
};