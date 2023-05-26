/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:52:11 by fsandel           #+#    #+#             */
/*   Updated: 2023/05/26 16:40:06 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
  std::cout << "[ DEBUG ]"
            << "\n";
  std::cout
      << "I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
      << "\n";
  std::cout << "\n";
}

void Harl::info(void) {
  std::cout << "[ INFO ]"
            << "\n";
  std::cout
      << "I cannot believe adding extra bacon costs more money. You didn’t put "
         "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
      << "\n";
  std::cout << "\n";
}

void Harl::warning(void) {
  std::cout << "[ WARNING ]"
            << "\n";
  std::cout
      << "I think I deserve to have some extra bacon for free. I’ve been "
         "coming for years whereas you started working here since last month."
      << "\n";
  std::cout << "\n";
}

void Harl::error(void) {
  std::cout << "[ ERROR ]"
            << "\n";
  std::cout << "This is unacceptable! I want to speak to the manager now."
            << "\n";
  std::cout << "\n";
}

int getCase(std::string level) {
  int i = 0;
  std::string cases[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  while (i < 4) {
    if (level == cases[i]) return (i);
    i++;
  }
  return (4);
}

void Harl::complain(std::string level) {
  enum cases { DEBUG, INFO, WARNING, ERROR };
  switch (getCase(level)) {
    case DEBUG: {
      this->Harl::debug();
      this->Harl::info();
      this->Harl::warning();
      this->Harl::error();
      break;
    }
    case INFO: {
      this->Harl::info();
      this->Harl::warning();
      this->Harl::error();
      break;
    }
    case WARNING: {
      this->Harl::warning();
      this->Harl::error();
      break;
    }
    case ERROR: {
      this->Harl::error();
      break;
    }
    default: {
      std::cout << "[ Probably complaining about insignificant problems ]"
                << "\n";
      break;
    }
  }
}
