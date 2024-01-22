/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:33:21 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/04 18:22:38 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

FragTrap::FragTrap(void) : ClapTrap() {
	cout << "FragTrap " << _name << " default constructor called." << endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	cout << "FragTrap " << _name << " is ready to fight or you can get High Five." << endl;
}

FragTrap::~FragTrap(void) {
	cout << "FragTrap " << _name << " default destructor called no more high fives." << endl;
}

void FragTrap::highFivesGuys(void) {
	if (_energyPoint <= 0 || _hitPoint <= 0) {
		cout << "FragTrap " << _name << " has no energy or dead for high five." << endl;
		return ;
	}
	cout << "FragTrap " << _name << " high fives everybody." << endl;
	_energyPoint--;
	cout << "FragTrap energy left: \t" << _energyPoint << endl;
}