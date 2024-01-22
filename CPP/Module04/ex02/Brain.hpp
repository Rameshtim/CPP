/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:02:31 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/05 16:05:31 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	
	private:
		std::string	_ideas[100];

	public:
		Brain(void);
		Brain(const Brain &to_copy);
		Brain& operator=(const Brain &original);
		~Brain(void);
};

# endif