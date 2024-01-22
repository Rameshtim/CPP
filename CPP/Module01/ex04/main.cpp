/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:56:19 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/07 18:56:19 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FindReplace.hpp"

int main(int argc, char **argv) {
	
	if (argc != 4) {
		std::cerr << "Format: ./findReplace <filename> <s1> <s2> " << std::endl;
		return EXIT_FAILURE;
	}
	else {
		FindReplace	findRep(argv[1]);
		findRep.replace(argv[2], argv[3]);
	}
	return EXIT_SUCCESS;
}