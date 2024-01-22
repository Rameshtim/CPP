/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:41:04 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/06 15:00:30 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::string;

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook() {
}

void	PhoneBook::welcome(void) const {
	cout << endl;
	cout << "Welcome to The 📞 Phone Book" << endl;
	cout << endl;
	cout << "-------- USAGE --------------" << endl;
	cout << "| ADD   : To Add Contacts.   |" << endl;
	cout << "| SEARCH: To Find Contact.   |" << endl;
	cout << "| EXIT  : To Quit.           |" << endl;
	cout << "-----------------------------" << endl;
	cout << endl;
}

void	PhoneBook::addContact(void) {
	static int i;
	 _contacts[i % 8].init();
	 _contacts[i % 8].setIndex(i % 8);
	i++;
}

void	PhoneBook::printContacts(void) const {
	cout << endl;
	cout << "------------------- PHONEBOOK CONTACTS ---------------------------" << endl;
	cout << "_____________________________________________" << endl;
	std::cout << "|" << std::setw(10) << "Index" << std::flush;
	std::cout << "|" << std::setw(10) << "F_Name" << std::flush;
	std::cout << "|" << std::setw(10) << "L_Name" << std::flush;
	std::cout << "|" << std::setw(10) << "N_Name" << "|" << std::flush;
	cout << endl;
	cout << "|----------|----------|----------|----------|" << endl;
	
	
	for (int i = 0; i < 8; i++) {
		 _contacts[i].view(i);
	}
	cout << "_____________________________________________" << endl;
}

int	PhoneBook::_readInput() const {
	int	input = -1;
	bool valid = false;
	while (!valid)
	{
		cout << "Please enter the contact index: " << std::flush;
			//std::ws == remove whitespaces from the input
		if (cin >> std::ws >> input && input >= 0 && input <= 8) {
			valid = true;//all good exit the loop
		} else {
			cin.clear(); //reset the buffer
			//empty everything until '\n' char.
			cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			cout << "Invalid index: Please try again" << endl;
		}
	}
	std::cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	return (input);
}

void PhoneBook::search(void) const {
	int	i =  _readInput();
	 _contacts[i].display(i);
}


/* int	PhoneBook::_readInput() const {
	int	input = -1;
	bool valid = false;
	while (!valid)
	{
		cout << "Please enter the contact index: " << std::flush;
		// cin >> input;
		// if (cin.good() && (input >= 0 && input <= 8)) {
		// if (input >= 0 && input <= 8) {
			//std::ws == remove whitespaces from the input
		if (cin >> std::ws >> input && input >= 0 && input <= 8) {
			valid = true;//all good exit the loop
		} else {
			cin.clear(); //reset the buffer
			//empty everything until '\n' char.
			cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			cout << "Invalid index: Please try again" << endl;
		}
	}
	std::cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	return (input);
} */