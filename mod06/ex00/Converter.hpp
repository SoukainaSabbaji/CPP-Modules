/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:19:47 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/30 14:37:31 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstring>
#include <cmath>
#include <climits>
#include <iomanip>
#include <cfloat>
#include <cstdlib>

#define RED   "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW   "\x1b[33m"
#define BLUE   "\x1b[34m"
#define MAGENTA   "\x1b[35m"
#define CYAN   "\x1b[36m"
#define RESET "\x1b[0m"

class Converter
{
    private:
        std::string _str;
    public:
        Converter();
        Converter(std::string str);
        Converter(Converter const &src);
        Converter &operator=(Converter const &rhs);
        std::string getStr() const;
        ~Converter();
        void convert(std::string str);
        operator char() ;
        operator int() ;
        operator float() ;
        operator double() ;      
};


#endif