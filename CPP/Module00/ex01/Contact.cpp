/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:52:05 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/06 15:06:26 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cctype> //for isdigit
#include <limits>
#include <algorithm> //for std::all_of

// using namespace std;

Contact::Contact() {
}

Contact::~Contact() {
}

//to check if something is given and not empty
std::string Contact::_getInput(std::string str) const {
	std::string input = "";
	bool		valid = false;
	while (!valid) {
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty()) {
			valid = true;
		}
		else {
			std::cin.clear();
			std::cout << "Invalid: Please try again." << std::endl;
		}
	}
	return (input);
}

//initialize the contact with the given inputs which are not empty
void	Contact::init(void) {
	 _firstName =  _getInput("Please enter your first name: ");
	  _lastName =  _getInput("Please enter your last name: ");
	 _nickName =  _getInput("Please enter your Nickname: ");
	 _phoneNumber =  _getInput("Please enter your Phone Number: ");
	if (!isNumeric( _phoneNumber)){
		while (!isNumeric( _phoneNumber)) {
			std::cout << "Invalid input. Please enter numeric digits only !" << std::endl;
		 	 _phoneNumber =  _getInput("Please enter your Phone Number: ");	
		}
	}
	 _darkestSecret =  _getInput("Please enter your darkest secret: ");
	std::cout << std::endl;
}

bool Contact::isNumeric(const std::string& str) const {
	for (size_t i = 0; i < str.length(); ++i) {
		if (!std::isdigit(str[i])) {
			return false;
		}
	}
	return true;
}

std::string Contact::_printLen(std::string str) const {
	if (str.length() > 10) {
		return str.substr(0, 9) + ".";
	}
	return str;
}

void	Contact::setIndex(int i) {
	 _index = i;
}

void	Contact::view(int index) const {
	if ( _firstName.empty()) {
		return ;
	}
	std::cout << "|" << std::setw(10) << index << std::flush;
	std::cout << "|" << std::setw(10) <<  _printLen( _firstName) << std::flush;
	std::cout << "|" << std::setw(10) <<  _printLen( _lastName) << std::flush;
	std::cout << "|" << std::setw(10) <<  _printLen( _nickName) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::display(int index) const {
	if ( _firstName.empty()) {
		std::cout << "No contacts yet at index " << index << ". Please add some contacts." << std::endl;
		std::cout << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "---->> CONTACT " << index << " <<----" << std::endl;
	std::cout << "First Name:\t" <<  _firstName << std::endl;
	std::cout << "Last Name:\t" <<  _lastName << std::endl;
	std::cout << "Nick Name:\t" <<  _nickName << std::endl;
	std::cout << "Darkest Secret:\t It's hidden for you ..... ╭∩╮(Ο_Ο)╭∩╮ " << std::endl;
	std::cout << "Phone Number:\t" <<  _phoneNumber << std::endl;
	std::cout << std::endl;	
}

/* void	Contact::init(void) {
	 _firstName =  _getInput("Please enter your first name: ");
	  _lastName =  _getInput("Please enter your last name: ");
	 _nickName =  _getInput("Please enter your Nickname: ");
	 _phoneNumber =  _getInput("Please enter your Phone Number: ");
	if (!isNumeric( _phoneNumber)){
		while (!isNumeric( _phoneNumber)) {
			std::cout << "Invalid input. Please enter numeric digits only !" << std::endl;
		 	 _phoneNumber =  _getInput("Please enter your Phone Number: ");	
		}
	}
	// do {
	// 	 _phoneNumber =  _getInput("Please enter your Phone Number: ");
	// 	if (!isNumeric( _phoneNumber)) {
	// 		std::cout << "Invalid input. Please enter numeric digits only !" << std::endl;
	// 	}
	// } while (!isNumeric( _phoneNumber));
	//  _phoneNumber =  _getInput("Please enter your Phone Number: ");
	 _darkestSecret =  _getInput("Please enter your darkest secret: ");
	std::cout << std::endl;
} */
