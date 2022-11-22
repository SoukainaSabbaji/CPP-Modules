/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:43:50 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/21 14:56:41 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

Fixed::Fixed(const Fixed &Fixed)
{
    _fpVal = Fixed._fpVal;
    // _fbNum = Fixed._fbNum; //its const so ???
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed()
{
    _fpVal = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

/********** - Raw bits getter and setter - **********/

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    
}