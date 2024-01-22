/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:00:06 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/15 16:47:56 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter {
	private:
		std::string const _name;
		AMateria *_inventory[4];

	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &to_copy);
		Character& operator=(Character const &original);
		~Character();

		// std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		std::string const &getName(void) const;


};

#endif