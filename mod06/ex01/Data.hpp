/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:57:27 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/30 17:40:46 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

#define RED   "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW   "\x1b[33m"
#define BLUE   "\x1b[34m"
#define MAGENTA   "\x1b[35m"
#define CYAN   "\x1b[36m"
#define RESET "\x1b[0m"


class Data
{
    private:
        std::string _value;
    public:
        Data();
        ~Data();
        Data(std::string value);
        Data(Data const &ref);
        Data &operator=(Data const &ref);
        std::string getValue(void) const;
};

#endif