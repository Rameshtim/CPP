/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:04:59 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/16 19:07:29 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		_learnedMateria[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &to_copy) {
	for (int i = 0; i < 4; i++) {
		if (to_copy._learnedMateria[i]) {
			if (this->_learnedMateria[i]) {
				delete this->_learnedMateria[i];
			}
			_learnedMateria[i] = to_copy._learnedMateria[i]->clone();
		} else {
			_learnedMateria[i] = NULL;
		}
	}
	std::cout << "MateriaSource copy constructor called." << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &original) {
	if (this != &original) {
		for (int i = 0; i < 4; i++) {
			if (this->_learnedMateria[i]) {
				delete this->_learnedMateria[i];
			}
			if (original._learnedMateria[i]) {
				this->_learnedMateria[i] = original._learnedMateria[i]->clone();
			} else {
				this->_learnedMateria[i] = NULL;
			}
		}

	}
	return *this;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		if (this->_learnedMateria[i]) {
			delete this->_learnedMateria[i];
		}
	}
	// std::cout << "Materia Source Destroyed" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m) {
	int	i = 0;

	while (this->_learnedMateria[i] != NULL && i < 4) {
		i++;
	}
	if (i > 3 || i < 0) {
		std::cout << "Can learn only 4 Materia" << std::endl;
		return ;
	}
	this->_learnedMateria[i] = m;
	// std::cout << "Materia " << m->getType() << " learned" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = 0;

	while (i < 4 && this->_learnedMateria[i] && this->_learnedMateria[i]->getType() != type) {
		i++;
	}
	if (i >= 4 || !this->_learnedMateria[i]) {
		std::cout << "Materia does not exist to createMateria" << std::endl;
		return NULL;
	}
	// std::cout << "Materia Source " << type << " created Materia." << std::endl; 
	return this->_learnedMateria[i]->clone();
}

/* AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (!this->_learnedMateria[i]) {
			std::cout << "Materia does not exist to createMateria" << std::endl;
		}
		if (this->_learnedMateria[i] && this->_learnedMateria[i]->getType() == type) {
			return this->_learnedMateria[i]->clone();
		}
	}
	std::cout << "Materia Source " << type << " created Materia." << std::endl; 
	return NULL;
} */