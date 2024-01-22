/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:46:53 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/05 14:47:22 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


using std::cout;
using std::endl;

Dog::Dog(void) : Animal() {
	cout << "Dog >> default Constructor called" << endl;
	this->setType("Dog");
}

Dog::Dog(const Dog &to_copy) {
	cout << "Dog >> copy constructor called." << endl;
	*this = to_copy;
}

Dog&	Dog::operator=(const Dog &original) {
	if (this != &original) {
		this->_type = original._type;
	}
	cout << "Dog >> Copy assignment operator called." << endl;
	return *this;
}

Dog::~Dog(void) {
	cout << "Dog >> default destructor called." << endl;
}

void	Dog::makeSound(void) const {
	cout << "Woof Woof" << endl;
}