/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtimsina <rtimsina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:57:12 by rtimsina          #+#    #+#             */
/*   Updated: 2024/01/06 17:35:03 by rtimsina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FindReplace.hpp"

FindReplace::FindReplace(std::string filename) {
	this->_infile = filename;
	this->_outfile = this->_infile + ".replace";
}

FindReplace::~FindReplace(){}

void	FindReplace::replace(std::string toFind, std::string toReplace) {
	
	std::ifstream infile(this->_infile.c_str());
	std::ofstream outfile(this->_outfile.c_str());
	std::string content;
	
	if (infile.is_open()) {
		if (std::getline(infile, content, '\0')) {
			size_t pos = content.find(toFind);
			while (pos != std::string::npos) {
				content.erase(pos, toFind.length());
				content.insert(pos, toReplace);
				pos = content.find(toFind);
			}
			outfile << content;
			outfile.close();
		}
		else {
			std::cerr << "File is empty." << std::endl;
		}
		infile.close();
	}
	else {
		std::cerr << "Error: Cannot open file." << std::endl;
		exit(EXIT_FAILURE);
	}
}

/* void	FindReplace::replace(std::string toFind, std::string toReplace) {
	
	std::ifstream infile(this->_infile.c_str());
	std::ofstream outfile(this->_outfile.c_str());
	std::string content;
	
	if (infile.is_open()) {
		//read from infile till EOF in content
		if (std::getline(infile, content, '\0')) {
			size_t pos = content.find(toFind);
			//find function returns npos if the substring in not found
			while (pos != std::string::npos) {
				content.erase(pos, toFind.length());
				content.insert(pos, toReplace);
				pos = content.find(toFind);
			}
			outfile << content;
			outfile.close();
		}
		else {
			std::cerr << "File is empty." << std::endl;
		}
		infile.close();
	}
	else {
		std::cerr << "Error: Cannot open file." << std::endl;
		exit(EXIT_FAILURE);
	}
} */
