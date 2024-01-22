/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:45:21 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/05 16:22:19 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
		
		private:
			Brain	*_brain;
			
		public:
			Dog(void);
			Dog(const Dog &to_copy);
			Dog& operator=(const Dog &original);
			~Dog(void);

			void makeSound(void) const;
};

#endif