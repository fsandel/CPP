/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:22:15 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:47:43 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "animal.h"

#define CAPACITY 100

class Brain {
 public:
  Brain();
  ~Brain();
  Brain(const Brain& obj);
  Brain& operator=(const Brain& obj);

  void addIdea(std::string idea);
  void listIdeas(void) const;

 private:
  std::string ideas[CAPACITY];
  int i;
};