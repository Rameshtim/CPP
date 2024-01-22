/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:57:01 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/08 14:24:18 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FINDREPLACE_HPP
#define FINDREPLACE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

class FindReplace {
	private:
		std::string _infile;
		std::string _outfile;

	public:
		FindReplace(std::string filename);
		~FindReplace();
		void replace(std::string s1, std::string s2);
};


#endif