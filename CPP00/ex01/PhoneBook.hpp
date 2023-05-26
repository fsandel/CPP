/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:15:07 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:37:59 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include <iostream>

#include "Contact.hpp"

class PhoneBook {
 public:
  PhoneBook(void);
  void add(void);
  void search(void);

 private:
  int amount;
  Contact contact[8];

  void showContacts(void);
};