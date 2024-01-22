/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:32:32 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/02 16:59:28 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>


class Fixed {
	/* a member of a class as a static means only one copy of static member, no matter
	the copy of objects. Not is class definition but can be initilized outside the redeclaring
	the static variable using the scope resolution operator:: to identify which class it belongs. */
	private:
		int		_fixedPointValue;
		static const int _fractionalBits = 8;
	
	public:
		Fixed(void);
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed &copy_fixed);
		//making a copy assignment operator overload
		Fixed &operator=(const Fixed &assign_fixed);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
	bool	operator>( const Fixed &assign_fixed ) const;
	bool	operator<( const Fixed &assign_fixed ) const;
	bool	operator>=( const Fixed &assign_fixed ) const;
	bool	operator<=( const Fixed &assign_fixed ) const;
	bool	operator==( const Fixed &assign_fixed ) const;
	bool	operator!=( const Fixed &assign_fixed ) const;

	Fixed 	operator+(const Fixed &assign_fixed ) const;
	Fixed 	operator-(const Fixed &assign_fixed ) const;
	Fixed 	operator*(const Fixed &assign_fixed ) const;
	Fixed 	operator/(const Fixed &assign_fixed ) const;

	Fixed&	operator++( void ); //prefix
	Fixed	operator++( int ); //postfix
	Fixed&	operator--( void ); //prefix
	Fixed	operator--( int ); //postfix

	static Fixed& min( Fixed &a, Fixed &b);
	static const Fixed& min(const Fixed &a, const Fixed &b);
	static Fixed& max( Fixed &a, Fixed &b);
	static const Fixed& max(const Fixed &a, const Fixed &b);
	
	/* static member function are independent of any particular object of the class.
	- static member function can be called without any objects of the class
	- accessed only using class name and scope resolution operator ::
	- can access only static data member, other static member functions and any other 
	  functions from outside the class
	  
	- has class scope and no access to this pointer of class */
};


//sending the objects content to an output stream
//if stream insertion operator (<<) is used, it will decide how Fixed object
//will be displayed
std::ostream &operator<<(std::ostream &out, const Fixed &_fixed);
#endif