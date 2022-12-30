/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:12:29 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/30 17:32:49 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


/*******************- Basic constructors and destructors *******************/

Data::Data()
{
    this->_value = "0";
    std::cout << GREEN << "Data created" << RESET << std::endl;
}

Data::Data(std::string value)
{
    this->_value = value;
    std::cout << GREEN << "Data created" << RESET << std::endl;
}

Data::Data(Data const &ref)
{
    *this = ref;
    std::cout << GREEN << "Data created" << RESET << std::endl;
}

Data &Data::operator=(Data const &ref)
{
    this->_value = ref._value;
    return *this;
}

Data::~Data()
{
    std::cout << RED << "Data destroyed" << RESET << std::endl;
}

/*******************- Getter -*******************/

std::string Data::getValue() const
{
    return (this->_value);
}



