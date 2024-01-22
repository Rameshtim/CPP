/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:09:52 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/16 19:06:06 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure(void) :  AMateria("cure") {
	// std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &to_copy) : AMateria(to_copy) {
	// std::cout << "Cure copy constructor called" << std::endl;
	*this = to_copy;
}

Cure& Cure::operator=(Cure const &original) {
	// std::cout << "Cure operator= called" << std::endl;
	if (this!= &original) {
		this->_type = original.getType();
	}
	return (*this);
}

std::string const &Cure::getType() const {
	return this->_type;
}

Cure::~Cure(void) {
	// std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void  Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

