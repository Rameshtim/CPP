/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:35:09 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/08 15:03:38 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdio> //for stdin
using std::cout;
using std::endl;

int	main(void) {
	std::string input;

	cout << "Name your Zombie who lives in stack: ";
	getline(std::cin, input);
	if (std::cin.eof() == true) {
		std::cin.clear();
		clearerr(stdin);
		cout << endl;
	}
	randomChump(input);
	
	std::string name;
	cout << "Another Zombie is going to live in a Heap now, name it: " << std::flush;
	std::cin >> name;

	Zombie *zombie1 = newZombie(name);
	zombie1->announce();
	// delete zombie1;//if not destructor will not be called.
	
	return (0);
}