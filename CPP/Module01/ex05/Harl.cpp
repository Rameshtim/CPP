/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:33:46 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/07 21:33:46 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;

Harl::Harl(){};
Harl::~Harl(){};

void Harl::debug(void) {
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void Harl::info(void) {
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning(void) {
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void Harl::error(void) {
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(std::string level) {
	harl_func	functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*functions[i])();
		}
	}
}