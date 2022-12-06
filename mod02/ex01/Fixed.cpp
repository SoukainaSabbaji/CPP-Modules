/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:30:57 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/06 11:27:48 by ssabbaji         ###   ########.fr       */
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
    this->_fpVal = other.getFp();
    return *this;
} 

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

/********** - Raw bits getter and setter - **********/

int Fixed::getFp(void) const
{
    return this->_fpVal;
}

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

/********** - added constructors and member funcs - **********/

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fpVal = num << this->_fbNum;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fpVal = roundf(num * (1 << this->_fbNum));
}

/********** - conversion functions - **********/

float   Fixed::toFloat(void) const
{
    return (this->_fpVal / (float)(1 << this->_fbNum));    
}
    
int     Fixed::toInt(void) const
{
    return (this->_fpVal / (1 << this->_fbNum));
}

std::ostream &operator<<(std::ostream &o, Fixed const &rv)
{
    o << rv.toFloat();
    return o;
}

