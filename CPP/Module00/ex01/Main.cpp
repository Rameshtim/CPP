/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:49:01 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/06 14:56:39 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>
#include <iostream>
#include <string>

int	main(void) {
	PhoneBook book;
	std::string input = "";
	book.welcome();
	while (1) {
		std::cout << "Give your option: " << std::flush;
		std::getline(std::cin, input);
		if (!std::cin.good() || input.empty()) {
			std::cout << "Not Accepted !" << std::endl << std::flush;
			continue;
		}
		if (std::cin.eof()){
			break;
		} if (!input.compare("ADD")) {
			book.addContact();
		} else if(!input.compare("SEARCH")) {
			book.printContacts();
			book.search();
		} else if (!input.compare("EXIT")) {
			break;
		} else {
			std::cout << std::endl;
			std::cout << "Invalid Option. Please Retry !" << std::endl;
			std::cout << std::endl;
		}
		// std::cout << "> " << std::flush;
	}
	return (0);
}