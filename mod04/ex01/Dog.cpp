/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:52:54 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/17 12:54:19 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

Dog::Dog()
{
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << GREEN << "Dog constructor called" << RESET << std::endl;
}

Dog::Dog(Dog const &src)
{
    std::cout << GREEN << "Dog copy constructor called" << RESET << std::endl;
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
    delete this->brain;
    std::cout << RED << "Dog destructor called" << RESET << std::endl;
}


/********** - Other member functions - **********/

void Dog::makeSound() const
{
    std::cout << MAGENTA << "haw hawa haw haw :p" << RESET << std::endl;
}

std::string Dog::getBrainIdea(int i) const
{
    return this->brain->getIdeas()[i];
}

