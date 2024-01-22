/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:46:53 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/16 19:03:58 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


using std::cout;
using std::endl;

Dog::Dog(void) : FixAnimal() {
	cout << "Dog >> default Constructor called" << endl;
	this->setType("Dog");
	try {
		this->_brain = new Brain();
		cout << "Dog << new Brain success" << endl;
	}
	catch (const std::bad_alloc& here) {
		cout << "Dog << Brain memory alloc failed: " << here.what() << endl;
	}
}

Dog::Dog(const Dog &to_copy) : FixAnimal(to_copy) {
	cout << "Dog >> copy constructor called." << endl;
	this->_type = to_copy._type;
	// this->_brain = new Brain();
	this->_brain = new Brain(*to_copy._brain);
}

Dog&	Dog::operator=(const Dog &original) {
	if (this != &original) {
		// this->_type = original._type;
		this->_type = original._type;
		
		if (this->_brain != NULL) {
			delete this->_brain;
		}
		this->_brain = new Brain(*original._brain);
	}
	cout << "Dog >> Copy assignment operator called." << endl;
	return *this;
}

Dog::~Dog(void) {
	cout << "Dog >> default destructor called and Brain destroyed." << endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const {
	cout << "Woof Woof" << endl;
}