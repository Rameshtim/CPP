/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:34:41 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/15 17:28:25 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

using std::cout;
using std::endl;

WrongCat::WrongCat(void) {
	cout << "Wrong Cat << Default Constructor." << endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &to_copy) {
	cout << "Wrong Cat << Copy constructor" << endl;
	*this = to_copy;
}

WrongCat& WrongCat::operator=(const WrongCat &original) {
	if (this != &original) {
		this->_type = original._type;
	}
	cout << "Wrong Cat << Copy Assignment operator" << endl;
	return *this;
}

WrongCat::~WrongCat(void) {
	cout << "Wrong Cat << Default Destructor" << endl;
}

void WrongCat::makeSound(void) const {
	cout << "baa ^^   neigh^^   moo^^ " << endl;
	//not virtual in base class so not called
}