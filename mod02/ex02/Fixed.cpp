/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:30:57 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/03 18:29:54 by ssabbaji         ###   ########.fr       */
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

int Fixed::getRb(void) const
{
    return this->_fbNum;
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
    this->_fpVal = num * (1 << this->_fbNum);
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fpVal = roundf(num * (1 << this->_fpVal));
}

/********** - conversion functions - **********/

float   Fixed::toFloat(void) const
{
    return ((float)this->_fpVal / (1 << this->_fbNum));  
}
    
int     Fixed::toInt(void) const
{
    return (this->_fpVal / (1 << this->_fbNum));
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}

/********** - overloading operators functions - **********/

bool    Fixed::operator>(const Fixed &other)
{
    if (this->_fpVal > other.getRawBits())
        return true;
    else
        return false;    
}

bool    Fixed::operator<(const Fixed &other)
{
    if (this->_fpVal < other.getRawBits())
        return true;
    else
        return false;    
}

bool    Fixed::operator<=(const Fixed &other)
{
    if (this->_fpVal <= other.getRawBits())
        return true;
    else
        return false;    
}

bool    Fixed::operator>=(const Fixed &other)
{
    if (this->_fpVal >= other.getRawBits())
        return true;
    else
        return false;     
}

bool    Fixed::operator==(const Fixed &other)
{
    if (this->_fpVal == other.getRawBits())
        return true;
    else
        return false;
}

bool    Fixed::operator!=(const Fixed &other)
{
    if (this->_fpVal != other.getRawBits())
        return true;
    else    
        return false;
}
/********** - overloading arithmetic operators functions - **********/


//addition operator overloading , adds 2 fixed numbers to each other
Fixed  Fixed::operator+(const Fixed &other)
{
    return (this->_fpVal + other.getRawBits()); 
}

Fixed  Fixed::operator-(const Fixed &other)
{
    return (this->_fpVal - other.getRawBits());
}

Fixed  Fixed::operator*(const Fixed &other)
{
    return (this->toFloat() * other.toFloat());
}

Fixed  Fixed::operator/(const Fixed &other)
{
    return ((this->_fpVal / other.getRawBits()) >> this->_fbNum);
}

//postfix increment operator overloading
Fixed  Fixed::operator++(int)
{
    Fixed tmp(*this);
    
    this->_fpVal++;
    return tmp;
}

//pre-increment operator overloading
Fixed  &Fixed::operator++()
{
    this->_fpVal++;
    return *this;
}

//postfix decrement operator overloading
Fixed  Fixed::operator--(int)
{
    Fixed tmp(*this);
    
    this->_fpVal--;
    return tmp;
}

//pre-decrement operator overloading
Fixed  &Fixed::operator--()
{
    this->_fpVal--;
    return *this;
}

/********** - overloading min and max functions - **********/

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    else
        return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    else
        return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}