/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:48:27 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/09 14:49:07 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********** - Constructors , copy assignment op and destructor - **********/

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "vanilla";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(Animal const &rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

/********** - Getters and Setters - **********/

std::string Animal::getType() const
{
    return this->type;
}

/********** - Other member functions - **********/

void Animal::makeSound() const
{
    std::cout << "Generic animal sound" << std::endl;
}
