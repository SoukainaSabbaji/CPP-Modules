/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:20:04 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/01/01 14:16:46 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

/*******************- Basic constructors and destructors *******************/

Converter::Converter() 
{
    this->_str = "0";
    std::cout << GREEN << "Converter created" << RESET << std::endl;
}

Converter::Converter(std::string str) : _str(str)
{
    std::cout << GREEN << "Converter created" << RESET << std::endl;
}

Converter::Converter(Converter const &src)
{
    *this = src;
}

Converter &Converter::operator=(Converter const &rhs)
{
    if (this != &rhs)
    {
        _str = rhs.getStr();
    }
    return (*this);
}

Converter::~Converter()
{
    std::cout << RED << "Converterer destroyed" << RESET << std::endl;
}

/*******************- Getter --*******************/

std::string Converter::getStr() const
{
    return (_str);
}

/*******************- Conversion operators --*******************/

bool is_printable(char c)
{
    return c >= ' ' && c <= '~';
}

Converter::operator char()
{
    int value;
    try
    {
        value = std::stoi(_str);
    }
    catch (const std::exception &e)
    {
        char c = _str[0];
        if (is_printable(c))
            std::cout << "Converted value: " << c << std::endl;
        else
            std::cout << "Converted value: non-printable character" << std::endl;
        return c;
    }
    char c = static_cast<char>(value);
    if (is_printable(c))
    {
        std::cout << "Converted value: " << c << std::endl;
        return (c);
    }
    else
        std::cout << "Converted value: non-printable character" << std::endl;
    return c;
}

Converter::operator int()
{
    if (_str.find('.') != std::string::npos || _str.find('f') != std::string::npos)
    {
        float f = std::stof(_str);
        if (f < INT_MIN || f > INT_MAX)
        {
            std::cerr << RED << "Error: integer value out of range" << RESET << std::endl;
            return (0);
        }
        int i = static_cast<int>(f);
        std::cout << "Converted value: " << i << std::endl;
        return (i);
    }
    else
    {
        char *endptr;
        long value = std::strtol(_str.c_str(), &endptr, 10);
        if (endptr == _str.c_str() || *endptr != '\0')
        {
            std::cerr << RED << "Error: invalid integer" << RESET << std::endl;
        }
        else if (value < INT_MIN || value > INT_MAX)
        {
            std::cerr << RED << "Error: integer value out of range" << RESET << std::endl;
            return (0);
        }
        else
        {
            int i = static_cast<int>(value);
            std::cout << "Converted value: " << value << std::endl;
            return (i);
        }
    }
    return (0);
}

Converter::operator float()
{
    char *endptr;
    double value = std::strtod(_str.c_str(), &endptr);
    if (endptr == _str.c_str() || (*endptr != '\0' && *endptr != 'f'))
    {
        std::cerr << RED << "Error: invalid float" << RESET << std::endl;
        return (0.0f);
    }
    else if (value < -FLT_MAX || value > FLT_MAX)
    {
        std::cerr << RED << "Error: float value out of range" << RESET << std::endl;
        return (0.0f);
    }
    else
    {
        float f = static_cast<float>(value);
        std::cout << "Converted value: " << f << "f" << std::endl;
        return (f);
    }
}

Converter::operator double()
{
    std::string str = _str;
    if (str.back() == 'f')
        str.erase(str.length() - 1);
    char *endptr;
    double value = std::strtod(str.c_str(), &endptr);
    if (endptr == str.c_str() || *endptr != '\0')
    {
        std::cerr << RED << "Error: invalid double" << RESET << std::endl;
        return (0.0);
    }
    else if (value < -DBL_MAX || value > DBL_MAX)
    {
        std::cerr << RED << "Error: double value out of range" << RESET << std::endl;
        return (0.0);
    }
    else
    {
        double d = static_cast<double>(value);
        std::cout << "Converted value: " << d << std::endl;
        return (d);
    }
}