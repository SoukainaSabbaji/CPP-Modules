/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:31:01 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/01 14:08:20 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
    private:
        int                 _fpVal;
        static const int    _fbNum = 8;
    public:
        Fixed(); //default constructor
        ~Fixed(); //destructor
        Fixed(const Fixed &obj); //copy constructor
        Fixed &operator=(const Fixed &other); //copy assignment operator overload
        Fixed(const int num);
        Fixed(const float num);
        int     getRb(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);    
        float   toFloat(void) const;
        int     toInt(void) const;
};

        std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
#endif