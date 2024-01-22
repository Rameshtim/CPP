/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:21:55 by rtimsina          #+#    #+#             */
/*   Updated: 2023/11/23 18:39:40 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACTS 8
# define MAX_CONTACTS_INDEX 7

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	printContacts(void) const;
		void	search(void) const;
		void	welcome(void) const;
	private:
		Contact	_contacts[8];
		int		_readInput(void) const;
};

#endif