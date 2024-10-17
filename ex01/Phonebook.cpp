/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:37:50 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/17 19:42:18 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	return ;
}

Phonebook::~Phonebook(void)
{
		return ;	
}

void Phonebook::add_user(void)
{
		std::cout << "Entrer your first name : " << std::endl;

				std::getline(std::cin, put);
				if (instance.checkinfo(put) == -1)
						return ;
				instance.setfirstname(put);
				std::cout << instance.getfirstname() << std::endl;
				// FIRST NAME
				std::cout << "Entrer your last name : " << std::endl;
				std::getline(std::cin, put);
				if (instance.checkinfo(put) == -1)
						return ;
				instance.setlastname(put);
				std::cout << instance.getlastname() << std::endl;
				// LAST NAME
				std::cout << "Entrer your nickname : " << std::endl;
				std::getline(std::cin, put);
				if (instance.checkinfo(put) == -1)
						return ;
				instance.setnickname(put);
				std::cout << instance.getnickname() << std::endl;
				// NICK NAME
				std::cout << "Entrer your phone number : " << std::endl;
				std::getline(std::cin, put);
				if (instance.checkinfo(put) == -1)
						return ;
				instance.setphonenum(put);
				std::cout << instance.getphonenum() << std::endl;
				// PHONE NUME 
				std::cout << "Entrer your darkest secret : " << std::endl;
				std::getline(std::cin, put);
				if (instance.checkinfo(put) == -1)
						return ;
				instance.setdarksecret(put);
				std::cout << instance.getdarksecret() << std::endl;
				// Dark secret


}