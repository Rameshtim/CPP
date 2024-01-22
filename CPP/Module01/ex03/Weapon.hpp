/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:31:18 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/06 10:31:18 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon {
	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();
		void setType(std::string type);
		const std::string& getType(void);
};

#endif