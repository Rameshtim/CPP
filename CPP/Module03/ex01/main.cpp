/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:39:00 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/08 17:13:05 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

using std::cout;
using std::endl;

int	main(void) {
	

	
	ScavTrap taka("Taka");
	ScavTrap arthur("Arthur");
	ScavTrap hongbae("Hongbae");

	// arthur = hongbae; copy assignment operator

	cout << endl;

	taka.attack("Arthur");
	arthur.takeDamage(1);

	cout << endl;

	arthur.attack("Taka");
	taka.takeDamage(3);

	cout << endl;

	taka.attack("Arthur");
	arthur.takeDamage(1);

	cout << endl;

	hongbae.attack("Arthur");
	arthur.takeDamage(1);

	cout << endl;

	hongbae.attack("Taka");
	taka.takeDamage(6);

	cout << endl;
	
	taka.beRepaired(6);
	
	taka.attack("Hongbae");
	hongbae.takeDamage(10);

	cout << endl;

	taka.guardGate();
	hongbae.guardGate();
	arthur.guardGate();

	cout << endl;
	

	return 0;
}


	/* ClapTrap aaa("aaa");
	ClapTrap bbb("bbb");
	std::cout << '\n';
	aaa.beRepaired(3);
	std::cout << '\n';
	aaa.attack("bbb");
	std::cout << '\n';
	bbb.takeDamage(4);
	std::cout << '\n';
	aaa.attack("bbb");
	std::cout << '\n';
	bbb.takeDamage(6);
	std::cout << '\n';
	bbb.attack("aaa");
	std::cout << '\n';
	aaa.takeDamage(0);
	std::cout << '\n';
	aaa.attack("bbb");
	std::cout << '\n';
	bbb.takeDamage(4);
	std::cout << '\n';
	return (0); */