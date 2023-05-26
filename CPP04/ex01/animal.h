/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:50:18 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:47:00 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define DEFAULT "\033[0m"
#define RED "\033[0;31m"    // Dog
#define YELLOW "\33[0;33m"  // Brain
#define BLUE "\033[0;34m"   // Animal
#define PURPLE "\033[0;35m"
#define CYAN "\033[0;36m"
#define GREEN "\033[32m"  // Green

void print(std::string str, std::string color);
