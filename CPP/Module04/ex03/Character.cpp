/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:10:27 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/16 19:05:32 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() {};

Character::Character(std::string const &name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(Character const &to_copy) : _name(to_copy._name) {
	for (int i = 0; i < 4; i++) {
		if (to_copy._inventory[i]) {
			if (_inventory[i]) {
				delete _inventory[i];
			}
			_inventory[i] = to_copy._inventory[i]->clone();
		} else {
			_inventory[i] = NULL;
		}
	}
	// std::cout << "Character Copy constructor called" << std::endl;
}

Character& Character::operator=(Character const &original) {
	if (this!= &original) {
		// _name = original._name; // Not needed, since it's a const member

		//cleanup before copying
		for (int i = 0; i < 4; i++) {
			if (_inventory[i]) {
				delete _inventory[i];
			}
		}

		for (int i = 0; i < 4; i++) {
			if (original._inventory[i]) {
				_inventory[i] = original._inventory[i]->clone();
				std::cout << "deep copy of Character" << std::endl;
			} else {
				_inventory[i] = 0;
			}
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i]) {
			delete _inventory[i];
		}
	}
	// std::cout << "Character Destructor called" << std::endl;
}	

std::string const &Character::getName() const {
	return _name;
}

void Character::equip(AMateria* m) {
	if (!m) {
		std::cout << "ERROR: Nothing to equip" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return;
		}
	}
	std::cout << "ERROR: No more space in inventory" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "ERROR: Invalid index" << std::endl;
		return;
	}
	if (_inventory[idx]) {
		_inventory[idx] = 0; //do not delete, only remove reference
	} else {
		std::cout << "ERROR: Nothing to unequip" << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if ((idx < 0 || idx > 3) && _inventory[idx]) {
		std::cout << "ERROR: Invalid index" << std::endl;
		return;
	}
	if (_inventory[idx] == NULL){
		std::cout << "ERROR: No Materia to use" << std::endl;
		return;
	}
	this->_inventory[idx]->use(target); //call AMateria::use
}

// std::string const &Character::getName(void) const {
// 	return _name;
// }