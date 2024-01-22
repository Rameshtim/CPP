/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:20:00 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/06 14:21:03 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i =1; argv[i]; i++) {
			for (int j = 0; argv[i][j]; j++){
				char str = (char) toupper(argv[i][j]);
				std::cout << str;
			}
		}
	}
	std::cout << std::endl;
	return (0);
}