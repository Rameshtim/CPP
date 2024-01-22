/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:17:23 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/03 12:23:07 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point{
	private:
		const Fixed	_x;
		const Fixed _y;
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &to_copy);
		Point& operator=(const Point &original);
		~Point(void);

		Fixed getX(void) const;
		Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif