/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:27:00 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/06 16:01:52 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();
	
		void	announce(void);

	private:
		std::string _name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif

/* class Zombie {
	public:
	//constructor with parameter needed to use functions outside of class
		Zombie(std::string name);//Parameterized constructor
		~Zombie();
	
		void	announce(void);
		// void	setName(std::string name);
		// std::string getName();

	private:
		std::string _name;
}; */