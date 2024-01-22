/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:36:18 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/16 18:31:37 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

using std::cout;
using std::endl;

Cat::Cat(void) : Animal() {
	cout << "Cat >> default Constructor called" << endl;
	this->setType("Cat");
}

Cat::Cat(const Cat &to_copy) {
	cout << "Cat >> copy constructor called." << endl;
	*this = to_copy;
}

Cat&	Cat::operator=(const Cat &original) {
	if (this != &original) {
		this->_type = original._type;
	}
	cout << "Cat >> Copy assignment operator called." << endl;
	return *this;
}

Cat::~Cat(void) {
	cout << "Cat >> default destructor called." << endl;
}

void	Cat::makeSound(void) const {
	cout << "Miaou Miaou" << endl;
}