/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:43:50 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/22 16:26:42 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

Fixed::Fixed(const Fixed &Fixed)
{
    this->_fpVal = Fixed._fpVal;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed()
{
    this->_fpVal = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fpVal = other._fpVal;
    return *this;
} 
/********** - Raw bits getter and setter - **********/

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fpVal);
}

void Fixed::setRawBits(int const raw)
{
    this->_fpVal = raw;    
}