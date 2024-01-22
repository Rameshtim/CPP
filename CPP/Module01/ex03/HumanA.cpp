/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:35:40 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/06 10:35:40 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//here _weapon is a reference member so this is not allowed
// HumanA::HumanA(std::string name, Weapon& weapon) {
// 	this->_name = name;
// 	this->_weapon = weapon;
// }


//correct way to initialize a reference member is through the member initializer list
HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA()
{
}

void		HumanA::attack(void) {
	std::cout << this->_name << " attacks with his " << _weapon.getType() << std::endl;
}
