/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:20:21 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/08 16:31:37 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>


class Fixed {
	private:
		int		_fixedPointValue;
		static const int _fractionalBits = 8;
	
	public:
		Fixed();
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed &copy_fixed);
		Fixed &operator=(const Fixed &assign_fixed);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
};


//sending the objects content to an output stream
//if stream insertion operator (<<) is used, it will decide how Fixed object
//will be displayed
std::ostream &operator<<(std::ostream &out, const Fixed &_fixed);
#endif