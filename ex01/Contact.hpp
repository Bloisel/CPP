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


#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	public:

	Contact(void);
	~Contact(void);

	std::string getfirstname(void) const;
	void setfirstname(std::string input);

	std::string getlastname(void) const;
	void setlastname(std::string input);

	std::string getnickname(void) const;
	void setnickname(std::string input);

	std::string getphonenum(void) const;
	void setphonenum(std::string input);

	std::string getdarksecret(void) const;
	void setdarksecret(std::string input);

	int checkinfo(std::string input);

	private:
	size_t i;
	std::string _first_name;
	std::string _lastname;
	std::string _nickname;
	std::string _phonenum;
	std::string _darksecret;
	
};

#endif