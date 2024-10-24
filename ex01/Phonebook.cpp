/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:37:50 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/22 05:32:59 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Contact.hpp"
#include "Phonebook.hpp"

Phonebook::Phonebook() : _idx(0) 
{
		return ;	
}

Phonebook::~Phonebook(void)
{
		//std::cout << "You have press exit , see you later buddy" << std::endl;
		return ;	
}

std::string Phonebook::tronc(const std::string &test) const
{
	char toAdd = '.';
	if (test.length() > 10)
			return test.substr(0, 9) + toAdd;
	return test;	
}


void Phonebook::clearInput() 
{
    std::cin.clear(); 
				// std::cin.ignore() ignorer des restes dans le tampon entre// 
}



void Phonebook::print_index(void) const
{
		Phonebook instance_ext;
		int index;
		//index = 1;
		std::cout << "Enter contact index : ";
		std::cin >> index;
			if (std::cin.fail())
			{
					std::cout << "this aint an integrer " << std::endl;
					instance_ext.clearInput();
			}
			else if (index >= 0 && index <= (_idx - 1))
			{
					std::cout << "first name : " << _tabo[index].getfirstname() << std::endl;
					std::cout << "last name : " << _tabo[index].getlastname() << std::endl;
					std::cout << "nickname : " <<_tabo[index].getnickname() << std::endl;
					std::cout << "phone number : " << _tabo[index].getphonenum() << std::endl;
					std::cout << "the dark secret : " << _tabo[index].getdarksecret() << std::endl;
					return ;
			}
			else
			{
				std::cout << "this time it is an integrer but out of the array" << std::endl;
				instance_ext.clearInput();	
			}
}




int Phonebook::print(void) const
{
			if (_idx == 0)
			{
					std::cout << "Come on no contact has been added yet.. please try again" << std::endl;
					return (-1);
			}
			std::cout << std::setw(10) << "Index" << "|";
			std::cout << std::setw(10) << "First Name" << "|";
			std::cout << std::setw(10) << "Last Name" << "|";
			std::cout << std::setw(10) << "Nickname" << "|";
			std::cout << std::endl;	
			for (int i = 0; i < _idx; i++)
			{
			 std::string fname = _tabo[i].getfirstname();
				std::string lname = _tabo[i].getlastname();
				std::string nname = _tabo[i].getnickname();
				//std::cout << std::setw(10) << (i + 1) << "|";
				std::cout << std::setw(10) << (i) << "|";
				std::cout << std::setw(10) << tronc(fname) << "|";
				std::cout << std::setw(10) << tronc(lname) << "|";
				std::cout << std::setw(10) << tronc(nname) << "|" << std::endl;	
			}
			return (0);
}


void Phonebook::add_user(void)
{
		if (_idx > 7)
				std::cout << "Be aware your are now replacing a contact" << std::endl;
		
		std::cout << "Entrer your first name : "; 

		std::getline(std::cin, put);
				if (_tabo[_idx % 8].checkinfo(put) == -1)
						return ;
		_tabo[_idx % 8].setfirstname(put);
		
		std::cout << "Entrer your last name : ";
		
		std::getline(std::cin, put);
		if (_tabo[_idx % 8].checkinfo(put) == -1)
					return ;
		_tabo[_idx % 8].setlastname(put);
		
		std::cout << "Entrer your nickname : ";
		std::getline(std::cin, put);
		if (_tabo[_idx % 8].checkinfo(put) == -1)
				return ;
		_tabo[_idx % 8].setnickname(put);
				
		std::cout << "Entrer your phone number : ";
		std::getline(std::cin, put);
		if (_tabo[_idx % 8].checkinfo(put) == -1)
				return ;
		_tabo[_idx % 8].setphonenum(put);
				
		std::cout << "Entrer your darkest secret : ";
		std::getline(std::cin, put);
		if (_tabo[_idx % 8].checkinfo(put) == -1)
			return ;
		_tabo[_idx % 8].setdarksecret(put);

		_idx++;	
}