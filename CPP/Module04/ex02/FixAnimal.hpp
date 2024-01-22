/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:56:46 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/05 17:06:10 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXANIMAL_HPP
# define FIXANIMAL_HPP
// # include <string>

# include <iostream>
# include "Brain.hpp"

class FixAnimal {
	protected:
		std::string _type;
	
	public:
		FixAnimal(void);
		FixAnimal(const FixAnimal &to_copy);
		FixAnimal& operator=(const FixAnimal &original);
		virtual ~FixAnimal(void);

		virtual void	makeSound(void) const = 0;
		// virtual void	makeSound(void) const = 0; is making pure virtual function.
		// Pure virtual functions are functions that are declared but not defined.
		//FixAnimal requires any child class to implement makeSound() method., otherwise
		// they cannot be instantiated/ used.
		std::string		getType(void) const;
		void			setType(std::string type);
		
};

#endif

		/* If you delete an object through a pointer to the base class, 
		and if the base class destructor is not virtual, then only the base 
		class destructor will be called. */
		// ~FixAnimal(void);