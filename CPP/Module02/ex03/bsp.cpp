/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:57:37 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/03 14:41:23 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed abs(Fixed x) {
	if (x < 0)
		return x * -1;
	return x;
}

// Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
static Fixed triangleArea(Point const a, Point const b, Point const c) {
	return ((a.getX() * (b.getY() - c.getY())
			+ b.getX() * (c.getY() - a.getY())
			+ c.getX() * (a.getY() - b.getY())) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point ) {
	
	Fixed abcArea = abs(triangleArea(a, b, c));
	Fixed pabArea = abs(triangleArea(point, a, b));
	Fixed pbcArea = abs(triangleArea(point, b, c));
	Fixed pcaArea = abs(triangleArea(point, c, a));

	return (abcArea == (pabArea + pbcArea + pcaArea));
}
