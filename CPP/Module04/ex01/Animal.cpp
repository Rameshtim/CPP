/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:13:00 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/05 15:26:55 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

using std::cout;
using std::endl;


Animal::Animal(void) {
	cout << "Animal default constructor" << endl;
}


Animal::Animal(const Animal &to_copy) {
	cout << "Animal copy constructor called" << endl;
	*this = to_copy;
}

Animal& Animal::operator=(const Animal &original) {
	if (this != &original) {
		this->_type = original._type;
	}
	cout << "Animal Copy assignment Operator called" << endl;
	return *this;
}

Animal::~Animal(void) {
	cout << "Animal Default Destructor called" << endl;
}

std::string	Animal::getType(void) const {
	return this->_type;
}

void	Animal::setType(std::string type) {
	this->_type = type;
}

void	Animal::makeSound(void) const {
	cout << "Animal make sound is called" << endl;
}
