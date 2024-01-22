/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:15:30 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/05 18:35:24 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	// int N = 10;
	// std::string name = "Zombie";
	int	N;
	std::cout << "Enter number of zombies: ";
	std::cin >> N;

	std::string name;
	std::cout << "Enter name for zombies: ";
	std::cin >> name;
	
	Zombie* horde = zombieHorde(N, name);

	for(int i = 0; i < N; i++) {
		horde[i].announce();
	}

	delete [] horde;


	return 0;
}