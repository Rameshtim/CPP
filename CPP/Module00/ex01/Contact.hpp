/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:24:41 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/06 15:41:07 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip> //setw
# include <string>

// using std::string;
class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int			_index;

		std::string _printLen(std::string str) const;
		std::string _getInput(std::string str) const;
	
	public:
		Contact();
		~Contact();
		void	init(void);
		void	view(int index) const;
		void	display(int index) const;
		void	setIndex(int i);
		bool	isNumeric(const std::string& str) const;
};

#endif