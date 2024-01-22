/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:01:48 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/16 19:06:15 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

using std::cout;


Ice::Ice(void)  : AMateria("ice") {
	// cout << "Ice constructor called" << std::endl;
}


Ice::Ice(Ice const &to_copy) : AMateria(to_copy) {
	// cout << "Ice copy constructor called" << std::endl;
	*this = to_copy;
}


Ice& Ice::operator=(Ice const &original) {
	// cout << "Ice operator= called" << std::endl;
	if (this!= &original)
		this->_type = original.getType();
	return (*this);
}

Ice::~Ice(void) {
	// cout << "Ice destructor called" << std::endl;
}

std::string const &Ice::getType() const {
	return (this->_type);
}

AMateria *Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter &target) {
	cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}