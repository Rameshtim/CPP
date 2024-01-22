/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:03:33 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/05 16:38:12 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie(); //default constructor
	//constructor with parameter needed to use functions outside of class
		// Zombie(std::string name);//overloaded constructor
		~Zombie();
	
		void	announce(void);
		void	setName(std::string name);
		std::string getName(void);

	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif