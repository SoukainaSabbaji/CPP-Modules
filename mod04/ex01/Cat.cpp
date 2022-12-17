/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:52:45 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/12 15:14:20 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

Cat::Cat()
{
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat &Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}


/********** - Other member functions - **********/

void Cat::makeSound() const
{
    std::cout << "Meow :3" << std::endl;
}

void    Cat::setBrainIdea(int i, std::string idea)
{
    this->brain->setIdea(idea, i);
}

std::string Cat::getBrainIdea(int i) const
{
    return this->brain->getIdeas()[i];
}


