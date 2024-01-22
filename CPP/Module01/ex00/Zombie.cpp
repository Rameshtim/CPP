/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:37:48 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/06 16:02:49 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cout;

Zombie::Zombie(std::string name){
	this->_name = name;
}

//
Zombie::~Zombie() {
	cout << "Your favorite Zombie " << this->_name << " just died again" << std::endl;
}


void	Zombie::announce(void) {
	cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


// std::string Zombie::getName() {
// 	return this->_name;
// }

// void	Zombie::setName(std::string name) {
// 	this->_name = name;
// }