/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:31:26 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/05 17:10:10 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "FixAnimal.hpp"

class Cat : public FixAnimal {
		
		private:
			Brain *_brain;
			
		public:
			Cat(void);
			Cat(const Cat &to_copy);
			Cat& operator=(const Cat &original);
			~Cat(void);

			void makeSound(void) const;
};


#endif