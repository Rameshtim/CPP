/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:59:36 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/04 18:21:22 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	protected:
		std::string	_name;
		int	_hitPoint;
		int	_energyPoint;
		int	_attackDamage;
	
	public:
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(const ClapTrap &to_copy);
		ClapTrap& operator=(const ClapTrap &original);
		~ClapTrap(void);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif