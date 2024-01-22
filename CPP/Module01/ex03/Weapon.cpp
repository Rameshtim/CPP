/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:40:39 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/06 10:40:39 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
}

Weapon::~Weapon() {
}

Weapon::Weapon() {
}

const std::string& Weapon::getType(void) {
	return (this->_type);
}

void	Weapon::setType(std::string newType) {
	this->_type = newType;
}