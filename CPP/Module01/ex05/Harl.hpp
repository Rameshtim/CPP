/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 20:59:31 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/06 17:09:04 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP
#include <iostream>
#include <string>
#include <cstdlib>

class Harl {
	private:
		void 	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	
	public:
		Harl();
		~Harl();
		void	complain(std::string level);

};

//void(Harl::*)() means a pointer to a member function of Harl that takes no 
//arguments and returns void.
//this enables polymorphic behavior and dynamic function calling in Harl without 
//needing virtural functions or inheritance.
typedef void (Harl::* harl_func) (void);

#endif