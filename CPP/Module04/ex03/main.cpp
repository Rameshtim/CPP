/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:48:16 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/16 18:27:21 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	// delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	// delete tmp;
	delete bob;
	delete me;
	delete src;
	return 0;
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter* me = new Character("me");

// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");

// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	// MY TEST
// 	std::cout << "\nMY TESTS:\n" << std::endl;

// 	me->unequip(1);
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	std::cout << std::endl;

// 	me->unequip(1);
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	std::cout << std::endl;

// 	me->unequip(0);
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	std::cout << std::endl;

// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);

// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	std::cout << std::endl;

// 	me->unequip(0);
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	// ---

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }


// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter*me = new Character("me");
//     AMateria*tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
// 	// me->use(0, *me);
// 	// me->use(1, *me);
//     me->unequip(0);
// 	// me->unequip(1);
//     delete me;
//     delete src;
// }
