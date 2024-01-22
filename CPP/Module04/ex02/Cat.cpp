/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:36:18 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/16 19:00:00 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

using std::cout;
using std::endl;


Cat::Cat(void) : FixAnimal() {
	cout << "Cat >> default Constructor called" << endl;
	this->setType("Cat");
	try {
		this->_brain = new Brain();
		cout << "Cat << new Brain success." << endl;
	}
	catch (const std::bad_alloc& here) {
		cout << "Cat << Brain memory alloc failed: " << here.what() << endl;
	}
}

Cat::Cat(const Cat &to_copy) : FixAnimal(to_copy) {
	cout << "Cat >> copy constructor called." << endl;
	this->_type = to_copy._type;
	this->_brain = new Brain(*to_copy._brain);
}

Cat&	Cat::operator=(const Cat &original) {
	if (this != &original) {
		// this->_type = original._type;
		this->_type = original._type;

		if (this->_brain!= NULL) {
			delete this->_brain;
		}
		this->_brain = new Brain(*original._brain);
	}
	cout << "Cat >> Copy assignment operator called." << endl;
	return *this;
}

Cat::~Cat(void) {
	cout << "Cat >> default destructor called and Brain Destroyed" << endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const {
	cout << "Miaou Miaou" << endl;
}