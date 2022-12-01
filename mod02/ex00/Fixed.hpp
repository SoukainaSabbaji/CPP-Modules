/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:43:53 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/23 14:52:27 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 5346
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
        int     getRawBits(void) const;
        void    setRawBits(int const raw);    
};

#endif