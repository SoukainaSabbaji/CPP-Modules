/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:20:34 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/01/01 16:03:13 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
	{
		std::cerr << RED << "Wrong number of arguments" << RESET << std::endl;
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
