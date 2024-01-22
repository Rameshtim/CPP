/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:27:03 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/16 17:52:18 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {

	private:
		std::string _type;

	public:
		Ice(void);
		Ice(Ice const &to_copy);
		Ice& operator=(Ice const &original);
		~Ice();

		AMateria *clone() const;
		std::string const &getType() const;
		void use(ICharacter &target);
};


#endif