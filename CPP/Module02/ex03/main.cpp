/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:07:43 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/08 16:51:25 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

using std::cout;
using std::endl;
/*
https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/
*/

int	main( void ) {

	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20, 0);

	Point	testPoint(30, 15);
	if (bsp( a, b, c, testPoint) == true) {
		cout << "Point is in the triangle." << endl;
	} else {
		cout << "Point is not inside the triangle." << endl;
	}

	return 0;
}