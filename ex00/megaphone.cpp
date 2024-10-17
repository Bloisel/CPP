/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 08:19:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/10/17 02:09:13 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>


int main(int argc, char **argv)
{
	std::string input;
	size_t j;

	if (argc > 1)
	{
			for (int i = 1; i < argc; i++)
			{
				input += argv[i];
				if (i < argc - 1) input += " ";
			}
			for (j = 0; j < input.length(); j++)
			{
					if(input[j] >= 'a' && input[j] <= 'z')
							input[j] -= 32;
			}
		std::cout << input << std::endl;	
		return 0;
	}
	else	
	{
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
		return (0);
	}
}