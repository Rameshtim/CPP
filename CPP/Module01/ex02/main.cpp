/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:54:46 by rtimsina          #+#    #+#             */
/*   Updated: 2023/12/08 13:38:11 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


int main()
{
	std::string text = "HI THIS IS BRAIN";
	std::string *text_ptr = &text;
	std::string &text_ref = text;


	std::cout << "Memory address of text: " << &text << std::endl;
	std::cout << "Memory address of held by text pointer: " << text_ptr << std::endl;
	std::cout << "Memory address of held by text reference: " << &text_ref << std::endl;

	std::cout << "This is text: " << text << std::endl;
	std::cout << "This is text_ptr: " << *text_ptr << std::endl;
	std::cout << "This is text_ref: " << text_ref << std::endl;

	return (0);
}