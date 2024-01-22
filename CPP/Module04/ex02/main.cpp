/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:47:34 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/16 19:04:52 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


using std::cout;
using std::endl;

int main(void)
{
	// FixAnimal new_dog;
	//not allowed abstract class

	
	std::cout << "-----------------FixAnimal------------------------" << std::endl;

	// const FixAnimal Doggy = Dog(); //represents an instance of the Dog class
	
	const FixAnimal *Bulldog = new Dog(); //pointer to abstract class can point to 
											// objects of derived classes
	cout << endl;

	const FixAnimal *Ragdoll = new Cat();
	cout << endl;

	cout << "-----------------Zoo------------------------" << std::endl;

	const FixAnimal *zoo[6];

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