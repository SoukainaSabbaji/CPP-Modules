/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:52:54 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/12 13:32:56 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog &Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}


/********** - Other member functions - **********/

void Dog::makeSound() const
{
    std::cout << "haw hawa haw haw :p" << std::endl;
}

std::string Dog::getBrainIdea(int i) const
{
    return *this->brain->getIdea(i);
}

