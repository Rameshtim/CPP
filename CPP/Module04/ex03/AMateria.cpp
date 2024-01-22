/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:41:33 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/14 16:51:20 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

using std::cout;
using std::endl;

AMateria::AMateria(void) {
	// cout << "AMateria default constructor called" << endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
	// cout << "AMateria parameterized constructor called for " << _type << endl;
}

AMateria::AMateria(AMateria const &to_copy) : _type(to_copy._type) {
	// cout << "AMateria copy constructor called" << endl;
}

AMateria& AMateria::operator=(AMateria const &original) {
	// cout << "AMateria operator= called" << endl;
	if (this!= &original)
		_type = original._type;
	return (*this);
}

AMateria::~AMateria(void) {
	// cout << "AMateria destructor called and destroyed " << _type << endl;
}

std::string const& AMateria::getType(void) const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}

// AMateria* AMateria::clone(void) const {
// 	return (AMateria*)this;
// }
