/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:48:27 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/18 12:41:18 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/********** - Constructors , copy assignment op and destructor - **********/

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "vanilla";
    std::cout << GREEN << "Animal constructor called" << RESET << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout<< GREEN  << "Animal copy constructor called" << RESET  << std::endl;
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
    std::cout << RED << "Animal destructor called"  << RESET<< std::endl;
}

/********** - Getters and Setters - **********/

std::string Animal::getType() const
{
    return this->type;
}

/********** - Other member functions - **********/

void Animal::makeSound() const
{
    std::cout << BLUE << "Generic animal sound" << RESET << std::endl;
}
