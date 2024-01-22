/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:47:34 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/16 18:52:24 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


using std::cout;
using std::endl;

/* int main (void) {
	// const Animal *Bulldog = new Dog();

	cout << endl;
	Dog basic;
	cout << endl;
	Dog tmp;
	cout << endl;
	{
		tmp = basic;
	}

	cout << endl;
	// delete Bulldog;

	return 0;
}
 */

int main(void)
{

	std::cout << "-----------------Animal------------------------" << std::endl;

	const Animal *Bulldog = new Dog();
	cout << endl;

	const Animal *Ragdoll = new Cat();
	cout << endl;

	cout << "-----------------Zoo------------------------" << std::endl;

	const Animal *zoo[6];

	cout << "-------------^^^ Dog ^^^--------------------" << std::endl;
	
	for (size_t i = 0; i < 3; i++)
	{
		zoo[i] = new Dog();
		cout << endl;
	}
	
	cout << "-----------------Cat------------------------" << std::endl;
	
	for (size_t i = 3; i < 6; i++) {
		zoo[i] = new Cat();
		cout << endl;
	}

	cout << "-----------------Delete Zoo ------------------------" << std::endl;
	for (size_t i = 0; i < 6; i++) {
		delete zoo[i];
		cout << endl;
	}

	cout << "----------------- Zoo Deleted ------------------------" << std::endl;

	cout << endl;

	delete Bulldog;
	delete Ragdoll;

	return 0;
}