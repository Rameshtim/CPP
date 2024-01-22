/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:13:00 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/05 15:26:55 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixAnimal.hpp"

using std::cout;
using std::endl;


FixAnimal::FixAnimal(void) {
	cout << "FixAnimal default constructor" << endl;
}


FixAnimal::FixAnimal(const FixAnimal &to_copy) {
	cout << "FixAnimal copy constructor called" << endl;
	*this = to_copy;
}

FixAnimal& FixAnimal::operator=(const FixAnimal &original) {
	if (this != &original) {
		this->_type = original._type;
	}
	cout << "FixAnimal Copy assignment Operator called" << endl;
	return *this;
}

FixAnimal::~FixAnimal(void) {
	cout << "FixAnimal Default Destructor called" << endl;
}

std::string	FixAnimal::getType(void) const {
	return this->_type;
}

void	FixAnimal::setType(std::string type) {
	this->_type = type;
}

// void	FixAnimal::makeSound(void) const {
// 	cout << "FixAnimal make sound is called" << endl;
// }
