/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:04:56 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/05 16:40:26 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cout;

// Zombie::Zombie(std::string name){
// 	this->_name = name;
// }

Zombie::Zombie() {
}

//
Zombie::~Zombie() {
	cout << "Your favorite Zombie " << this->getName() << " just died again" << std::endl;
}

void	Zombie::announce(void) {
	cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

std::string	Zombie::getName(void) {
	return this->_name;
}