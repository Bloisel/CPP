/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 08:19:04 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/15 15:16:42by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"

Contact::Contact(void)
{

	return;
}

Contact::~Contact(void)
{
		
		return ;	
}

std::string  Contact::getfirstname(void) const
{
		return this->_first_name;
}

void Contact::setfirstname(std::string input)
{
		this->_first_name = input;
}


std::string  Contact::getlastname(void) const
{
		return this->_lastname;
}

void Contact::setlastname(std::string input)
{
		this->_lastname = input;
}

std::string  Contact::getnickname(void) const
{
		return this->_nickname;
}

void Contact::setnickname(std::string input)
{
		this->_nickname = input;
}

std::string  Contact::getphonenum(void) const
{
		return this->_phonenum;
}

void Contact::setphonenum(std::string input)
{
		this->_phonenum = input;
}

std::string  Contact::getdarksecret(void) const
{
		return this->_darksecret;
}

void Contact::setdarksecret(std::string input)
{
		this->_darksecret = input;
}

int Contact::checkinfo(std::string input)
{
		this->i = 0;
		if (this->i == input.length())
		{
			std::cout << "empty information" << std::endl;	
			return (-1);
		}
		return (0);
}
