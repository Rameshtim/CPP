/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:04:03 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/09 16:50:53 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	protected:
		std::string _type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &to_copy);
		WrongAnimal& operator=(const WrongAnimal &original);
		~WrongAnimal(void);

		void	makeSound(void) const;
		std::string		getType(void) const;
		void			setType(std::string type);
};

# endif

/* # include <iostream>

class Animal {
	protected:
		std::string _type;
	
	public:
		Animal(void);
		Animal(const Animal &to_copy);
		Animal& operator=(const Animal &original);
		If you delete an object through a pointer to the base class, 
		and if the base class destructor is not virtual, then only the base 
		class destructor will be called. 
		// ~Animal(void);
		virtual ~Animal(void);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		void			setType(std::string type);
		
};

*/