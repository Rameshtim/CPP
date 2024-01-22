/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:33:57 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/08 16:35:10 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// const int Fixed::_fractionalBits = 8;

//initialize _fixedPointValue to 0 inside body of consturctor
/* Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
} */

//initialize _fixedPointValue before entering body of consturctor
Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
	
	// _fixedPointValue = 0;
}

Fixed::Fixed(const int intValue) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = intValue << _fractionalBits;
}

Fixed::Fixed(const float floatValue) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(floatValue * (1 << _fractionalBits));
}

Fixed::Fixed( const Fixed &copy_fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy_fixed;
	// _fixedPointValue = copy_fixed._fixedPointValue;
}

Fixed& Fixed::operator=( const Fixed &assign_fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(assign_fixed.getRawBits());
	return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

///makin a function getRawBits
int		Fixed::getRawBits(void) const {
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

//For example, if _fixedPointValue is 16 and _fractionalBits is 8, the expression would be evaluated 
//as 16 / 256.0, resulting in 0.0625 as the floating-point value.
float Fixed::toFloat(void) const {
	return (float)this->_fixedPointValue / (float)(1 << _fractionalBits);
}

int	Fixed::toInt(void) const {
	return this->_fixedPointValue >> _fractionalBits;
}

//The operator<< overload for the Fixed class you provided is designed to output a Fixed object
// to an output stream, using the toFloat function to convert the fixed-point value to a floating-point representation
std::ostream &operator<<(std::ostream &out, const Fixed &_fixed) {
	out << _fixed.toFloat();
	return out;
}