/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:43:46 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/03 14:44:57 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {
	// std::cout << "Default Constructor Called." << std::endl;
}

Point::Point ( const float x, const float y ) : _x(x), _y(y) {
	// std::cout << "Constuctor initialized with x and y." << std::endl;
}

Point::Point (const Point &to_copy) : _x(to_copy._x), _y(to_copy._y) {
	// *this = to_copy;
	// std::cout << "Copy Constructor called" << std::endl;
}

Point::~Point(void) {
	// std::cout << "Destructor called" << std::endl;
}

Point& Point::operator=(const Point &original) {
	(Fixed)this->_x = original._x;
	(Fixed)this->_y = original._y;
	return *this;
}

Fixed Point::getX(void) const {
	return this->_x;
}

Fixed Point::getY(void) const {
	return this->_y;
}