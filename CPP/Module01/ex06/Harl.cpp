/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:33:46 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/06 17:36:09 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;

Harl::Harl(){};
Harl::~Harl(){};

void Harl::debug(void) {
	cout << "[ DEBUG ]" << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
	cout << endl;
}

void Harl::info(void) {
	cout << "[ INFO ]" << endl;
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
	cout << endl;
}

void Harl::warning(void) {
	cout << "[ WARNING ]" << endl;
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
	cout << endl;
}

void Harl::error(void) {
	cout << "[ ERROR ]" << endl;
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
	cout << endl;
}

void Harl::complain(std::string level) {
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; i++) {
		if (level == levels[i]) {
			switch (i)
			{
			case 0:
				this->debug();
			
			case 1:
				this->info();
			
			case 2:
				this->warning();
			
			case 3:
				this->error();
				break;
			
			default:
				break;
			}
			return;
		}
	}
	cout << "[ Probably complaining about insignificant problems ]" << endl;
}