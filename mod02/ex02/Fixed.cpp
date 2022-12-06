/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:30:57 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/05 13:39:44 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

Fixed::Fixed()
{
    this->_fpVal = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy Constructor called" << std::endl;
	this->_fpVal = obj._fpVal;
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this == &obj)
		return (*this);
	this->_fpVal = obj._fpVal;
	return *this;
}
/********** - Raw bits getter and setter - **********/

int	Fixed::getRawBits() const
{
	std::cout<< "getRawBits member function called" << std::endl;
	return(this->_fpVal);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout<< "setRawBits member function called" << std::endl;
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
    this->_fpVal = roundf(num * (1 << _fbNum));
}
/********** - conversion functions - **********/

float Fixed::toFloat(void) const
{	
   return (float)(this->_fpVal / (float)(1 << _fbNum));
}

int Fixed::toInt(void) const
{
    return this->_fpVal >> _fbNum;
}

/********** - insertion operator overload - **********/

std::ostream &operator<<(std::ostream &o, Fixed const &r)
{
	o << r.toFloat();
	return o;
}

/********** - comparison operators overload - **********/

bool	Fixed::operator<(const Fixed  &other)
{
	if (this->_fpVal < other._fpVal)
		return true;
	return false;
}

bool	Fixed::operator>(const Fixed  &other)
{
	if (this->_fpVal > other._fpVal)
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed  &other)
{
	if (this->_fpVal >= other._fpVal)
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed  &other)
{
	if (this->_fpVal <= other._fpVal)
		return true;
	return false;
}
bool	Fixed::operator!=(const Fixed  &other)
{
	if (this->_fpVal != other._fpVal)
		return true;
	return false;
}
bool	Fixed::operator==(const Fixed  &other)
{
	if (this->_fpVal == other._fpVal)
		return true;
	return false;
}

/********** - arithmetic operators overload - **********/

Fixed   Fixed::operator+(const Fixed &a)
{
	return(Fixed(toFloat() + a.toFloat()));
}

Fixed   Fixed::operator-(const Fixed &a)
{
	return (Fixed(toFloat() - a.toFloat()));

}

Fixed   Fixed::operator/(const Fixed &a)
{
	return (Fixed(toFloat() / a.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &a)
{
	return (Fixed(toFloat() * a.toFloat()));
}

/********** - increment and decrement operators overload - **********/

Fixed  Fixed::operator++(int)
{
    Fixed tmp(*this);
    
    this->_fpVal++;
    return tmp;
}

Fixed  &Fixed::operator++(void)
{
    this->_fpVal++;
    return *this;
}

Fixed  Fixed::operator--(int)
{
    Fixed tmp(*this);
    
    this->_fpVal--;
    return tmp;
}

Fixed  &Fixed::operator--(void)
{
    this->_fpVal--;
    return *this;
}

/********** - min and max functions - **********/

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a._fpVal > b._fpVal)
		return b;
	return a;
}

const	Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._fpVal > b._fpVal)
		return b;
	return a;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a._fpVal > b._fpVal)
		return a;
	return b;
}

const	Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._fpVal > b._fpVal)
		return a;
	return b;
}

