/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:05:36 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/05 16:10:15 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

using std::cout;
using std::endl;

Brain::Brain() {
	cout << "Brain << default constructor" << endl;
}

Brain::Brain(const Brain &to_copy) {
	cout << "Brain << copy constructor ." << endl;
	*this = to_copy;
}

Brain& Brain::operator=(const Brain &original) {
	if (this != &original) {
		for (size_t i = 0; i < 100; i++) {
			this->_ideas[i] = original._ideas[i];
		}
	}
	cout << "Brain << Copy assignment operator " << endl;
	return *this;
}

Brain::~Brain(void) {
	cout << "Brain << Default Destructor " << endl;
}