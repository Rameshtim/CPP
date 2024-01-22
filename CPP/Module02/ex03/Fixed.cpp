/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:00:21 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/02 18:06:35 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

using std::cout;
using std::endl;
Fixed::Fixed(void) : _fixedPointValue(0) {
	// cout << "Default constructor called" << endl;
}

Fixed::Fixed( const int intValue ) : _fixedPointValue( intValue << _fractionalBits) {
	// cout << "Int constructor called" << endl;
}

Fixed::Fixed( const float floatValue ) : _fixedPointValue( roundf( floatValue * ( 1 << _fractionalBits))) {
	// cout << "Float constructor called" << endl;
}

Fixed::Fixed( const Fixed &copy_fixed) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy_fixed;
	// _fixedPointValue = copy_fixed._fixedPointValue;
}

Fixed& Fixed::operator=( const Fixed &assign_fixed) {
	// std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(assign_fixed.getRawBits());
	return *this;
}

Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
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

// --------------------------- Comparison operators -------------------------

bool	Fixed::operator>( const Fixed &assign_fixed) const {
	return this->getRawBits() > assign_fixed.getRawBits();
}

bool	Fixed::operator<( const Fixed &assign_fixed) const {
	return this->getRawBits() < assign_fixed.getRawBits();
}

bool	Fixed::operator>=( const Fixed &assign_fixed) const {
	return this->getRawBits() >= assign_fixed.getRawBits();
}

bool	Fixed::operator<=( const Fixed &assign_fixed) const {
	return this->getRawBits() <= assign_fixed.getRawBits();
}

bool	Fixed::operator==( const Fixed &assign_fixed) const {
	return this->getRawBits() == assign_fixed.getRawBits();
}

bool	Fixed::operator!=( const Fixed &assign_fixed) const {
	return this->getRawBits() != assign_fixed.getRawBits();
}

// --------------------------- Arithmetic operators -------------------------

Fixed	Fixed::operator+( const Fixed &assign_fixed ) const {
	return Fixed( this->toFloat() + assign_fixed.toFloat() );
}

Fixed	Fixed::operator-( const Fixed &assign_fixed ) const {
	return Fixed( this->toFloat() - assign_fixed.toFloat() );
}

Fixed	Fixed::operator*( const Fixed &assign_fixed ) const {
	return Fixed( this->toFloat() * assign_fixed.toFloat() );
}

Fixed	Fixed::operator/( const Fixed &assign_fixed ) const {
	return Fixed( this->toFloat() / assign_fixed.toFloat() );
}

// --------------------------- Increment/Decrement operators -------------------------

Fixed&	Fixed::operator++( void ) {
	this->_fixedPointValue += 1;
	return *this;
}

Fixed	Fixed::operator++( int ) {
	// copy before increment
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed&	Fixed::operator--( void ) {
	this->_fixedPointValue -= 1;
	return *this;
}

Fixed	Fixed::operator--( int ) {
	// copy before decrement
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

// --------------------------- Max and Min -------------------------

Fixed& Fixed::min( Fixed &a, Fixed &b) {
	if ( a.getRawBits() < b.getRawBits() )
		return a;
	return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b) {
	if ( a.getRawBits() < b.getRawBits() )
		return a;
	return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
