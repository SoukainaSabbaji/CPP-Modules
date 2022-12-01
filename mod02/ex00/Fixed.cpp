/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:43:50 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/01 13:51:47 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/********** - Constructors , copy assignment op and destructor - **********/
Fixed::Fixed()
{
    this->_fpVal = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &Fixed)
{
    std::cout << "Copy constructor called" << std::endl;
   *this = Fixed;
}

Fixed& Fixed::operator=(Fixed const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
   this->_fpVal = other.getRb();
    return *this;
} 

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

/********** - Raw bits getter and setter - **********/


int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fpVal);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fpVal = raw << this->_fbNum;    
}