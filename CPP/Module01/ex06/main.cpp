/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 05:47:36 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/08 05:47:36 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;

int main(int argc, char **argv) {
	
	Harl	harl;
	
	if (argc != 2 && !argv[1]) {
		std::cerr << "Invalid no. of Arguments" << endl;
		cout << "Format: ./harlFilter DEBUG/INFO/WARNING/ERROR " << endl;
		return EXIT_FAILURE;
	}
	harl.complain(argv[1]);
	return EXIT_SUCCESS;
}