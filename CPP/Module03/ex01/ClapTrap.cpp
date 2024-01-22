/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:30:34 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/08 17:12:50 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	std::cout << "ClapTrap " << _name << " Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " is ready to fight!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &to_copy) {
	*this = to_copy;
	std::cout << "Copy constructor is called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &original)
{
	std::cout << "Copy assignment operator is called!" << std::endl;
	if (this != &original) {
		this->_name = original._name;
		this->_hitPoint = original._hitPoint;
		this->_energyPoint = original._energyPoint;
		this->_attackDamage = original._attackDamage;
	}
	return *this;
	
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << _name << " Default destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_hitPoint < 0 || this->_energyPoint < 0) {
		std::cout << "ClapTrap is out of energy point." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " damage!" << std::endl;
	this->_energyPoint--;
	std::cout << "Energy Level: \t" << _energyPoint << std::endl;
}


void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoint <= 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	this->_hitPoint -= amount;
	this->_hitPoint -= _attackDamage;
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage." << std::endl;
	std::cout << "Hit Point left: \t" << _hitPoint << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoint <= 0) {
		std::cout << "ClapTrap " << this->_name << " cannot even repair withou energy" << std::endl;
		return ;
	}
	this->_hitPoint += amount;
	this->_energyPoint--;
	std::cout << "ClapTrap " << this->_name << " is repaired with " << amount << " points" << std::endl;
}



