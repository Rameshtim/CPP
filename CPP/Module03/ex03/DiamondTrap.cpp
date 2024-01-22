/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:37:42 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/05 12:24:26 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

//virtual keyword is used to avoid the Diamond Problem
//that arises when a class inherits from two classes that have a common ancestor.
//whthout virtual DiamondTrap would have two copies of the ClapTrap.

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap() {
	cout << "DiamondTrap " << _diamondName << " default constructor is called" << endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	_diamondName = name;
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	
	cout << "DiamondTrap Parameterized Constructor called for " << _diamondName << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &to_copy) {
	*this = to_copy;
	cout << "DiamondTrap copy constructor called for " << _diamondName << endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &original) {
	if (this != &original) {
		_diamondName = original._diamondName;
		ClapTrap::_name = original._name + "_clap_name";
		_hitPoint = original._hitPoint;
		_energyPoint = original._energyPoint;
		_attackDamage = original._attackDamage;
	}
	cout << "DiamondTrap copy assignoperator called for " << _diamondName << endl;
	return *this;
}

DiamondTrap::~DiamondTrap(void) {
	cout << "DiamondTrap default Destructor called for " << _diamondName << endl;
}

void DiamondTrap::whoAmI(void) {
	cout << "I am " << _diamondName << " and my ClapTrap name is " << _name << endl;
}