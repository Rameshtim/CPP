/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:20:21 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/08 17:31:59 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>


class Fixed {
	private:
		int		_fixedPointValue;
		static const int _fractionalBits;
	
	public:
		Fixed();
		Fixed(const Fixed &copy);
		//making a copy assignment operator overload
		Fixed &operator=(const Fixed &assign);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
};


#endif