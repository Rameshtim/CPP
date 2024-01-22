/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 05:47:36 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/08 05:47:36 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;

int main(void) {
	
	Harl	harl;
	std::string	input;

		cout << "Harl can complain on these levels" << endl;
		cout << "_________________________________" << endl;
		cout << "DEBUG" << endl;
		cout << "INFO" << endl;
		cout << "WARNING" << endl;
		cout << "ERROR" << endl;
	while (input.compare("EXIT"))
	{
		cout << endl;
		cout << "Choose a action for Harl or EXIT to quit: ";
		std::cin >> input;
		harl.complain(input);
	}
	return EXIT_SUCCESS;
}