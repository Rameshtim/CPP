/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:23:04 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/14 12:21:48 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP


#include "ICharacter.hpp"

#include <iostream>

class ICharacter; // to avoid circular dependencies

class AMateria {
	
	protected:
		std::string _type;

	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &to_copy);
		AMateria& operator=(AMateria const &original);
		virtual ~AMateria(void);

		std::string const &getType(void) const; //Returns the materia type

		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};


#endif