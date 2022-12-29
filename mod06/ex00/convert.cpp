/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:19:52 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/29 16:20:11 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert()
{
}

Convert::Convert(Convert const &src)
{
    *this = src;
}

Convert &Convert::operator=(Convert const &rhs)
{
    if (this != &rhs)
    {
    }
    return (*this);
}

Convert::~Convert()
{
}

void Convert::convert(char *str)
{
    std::cout << "char: ";
    if (strlen(str) == 1 && !isdigit(str[0]))
    {
        std::cout << "'" << str[0] << "'" << std::endl;
    }
    else
    {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "int: ";
    if (strlen(str) == 1 && !isdigit(str[0]))
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        std::cout << atoi(str) << std::endl;
    }
    std::cout << "float: ";
    if (strlen(str) == 1 && !isdigit(str[0]))
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        std::cout << atof(str) << "f" << std::endl;
    }
    std::cout << "double: ";
    if (strlen(str) == 1 && !isdigit(str[0]))
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        std::cout << atof(str) << std::endl;
    }
}