/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:21:47 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/05 15:31:00 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal(void) {
	cout << "Wrong Animal << default constructor!" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &to_copy) {
	cout << "Wrong Animal << copy Constructor" << endl;
	*this = to_copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &original) {
	if (this != &original) {
		this->_type = original._type;
	}
	cout << "Wrong Animal << copy Assignment operator" << endl;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	cout << "Wrong Animal << Default Destructor." << endl;
}

std::string WrongAnimal::getType(void) const {
	return this->_type;
}

void	WrongAnimal::setType(std::string type) {
	this->_type = type;
}

void	WrongAnimal::makeSound(void) const {
	cout << "Wrong Animal << make sound! make sound! make sound!" << endl;
}