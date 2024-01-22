/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:08:36 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/16 17:52:24 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
	private:
		std::string _type;

	public:
		Cure(void);
		Cure(Cure const &to_copy);
		Cure& operator=(Cure const &original);
		~Cure();

		AMateria *clone() const;
		std::string const &getType() const;
		void use(ICharacter &target);

};


#endif