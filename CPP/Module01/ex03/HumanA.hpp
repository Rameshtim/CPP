/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:37:37 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/06 10:37:37 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon& _weapon;// since HumanA is complete, meaning in a constructor getting
		//name and weapon we can just create a reference and will be managed externally
	
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

	void attack(void);
};

#endif