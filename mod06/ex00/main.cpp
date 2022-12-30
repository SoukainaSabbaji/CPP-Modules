/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:20:34 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/30 14:26:20 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

// int main(int argc, char **argv)
// {
//     Converter c;
//     if (argc != 2)
//     {
//         std::cout << RED <<  "wrong ! usage : ./convert <literal> " << RESET << std::endl;
//         return (1);
//     }
//     std::string literal = argv[1];
//     //test the conversion to char
//     try
//     {
//         c = Converter(literal);
//         std::cout << "char: ";
//         std::cout << static_cast<char>(c) << std::endl;
//     }
//     catch (std::exception &e)
//     {
//         std::cout << "char: " << e.what() << std::endl;
//     }
// }

int main(int argc, char **argv)
{
    	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments\n";
		return (0);
	}
	std::cout << std::fixed << std::setprecision(1); // Precision = 1
	std::string	argument = argv[1];
	
	Converter	converter(argument);

	char		c;
	int			n;
	float		f;
	double		d;

	c = static_cast<char>(converter);
	n = static_cast<int>(converter);
	f = static_cast<float>(converter);
	d = static_cast<double>(converter);
}