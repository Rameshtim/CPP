/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:02:22 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/04 18:12:10 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

ScavTrap::ScavTrap(void) : ClapTrap() {
	cout << "ScavTrap default constructor called" << endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	cout << "ScavTrap " << this->_name << " is ready to fight and guard!" << endl;
}

ScavTrap::~ScavTrap(void) {
	cout << "ScavTrap " << this->_name << " is now destructed." << endl;
}

void ScavTrap::attack(const std::string &target) {
	if (_energyPoint <= 0 || _hitPoint <= 0) {
		cout << "ScavTrap " << _name << " cannot attack without energy or not alive." << endl;
		return ;
	}
	cout << "ScavTrap " << _name << " attacked " << target << ", causing " << this->_attackDamage << " damage!" << endl;
	_energyPoint--;
	cout << "Energy Level: \t" << _energyPoint << endl;
}

ScavTrap::ScavTrap(const ScavTrap &to_copy) : ClapTrap(to_copy) {
	cout << "ScavTrap copy constructor called." << endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &original) {
	cout << "ScavTrap copy assignment operator called." << endl;
	if (this != &original) {
		ClapTrap::operator=(original);
	}
	return *this;
}

void ScavTrap::guardGate() {
	if (_hitPoint <= 0) {
		cout << "ScavTrap " << _name << " is already dead. Ask somebody else to guard." << endl;
		return ;
	}
	cout << "ScavTrap " << _name << " is now Guarding the Gate. " << endl;
}