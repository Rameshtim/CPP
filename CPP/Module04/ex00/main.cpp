/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:47:34 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/15 17:24:14 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {

	std::cout << "-----------------Animal------------------------" << std::endl;
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();

	meta->makeSound();

	delete	i;
	delete	j;
	delete	meta;

	std::cout << "-----------------Wrong Animal------------------------" << std::endl;
	
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();
	
	std::cout << wrongI->getType() << " " << std::endl;

	wrongI->makeSound();

	delete wrongI;
	delete wrongMeta;

	return 0;
}