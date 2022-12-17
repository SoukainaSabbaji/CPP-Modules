/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:52:45 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/17 12:52:45 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

Cat::Cat()
{
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << GREEN << "Cat constructor called" << RESET << std::endl;
}

Cat::Cat(Cat const &src)
{
    std::cout << GREEN << "Cat copy constructor called" << RESET << std::endl;
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
    std::cout << RED << "Cat destructor called" << RESET << std::endl;
}


/********** - Other member functions - **********/

void Cat::makeSound() const
{
    std::cout << YELLOW << "Meow :3" << RESET << std::endl;
}

void    Cat::setBrainIdea(int i, std::string idea)
{
    this->brain->setIdea(idea, i);
}

std::string Cat::getBrainIdea(int i) const
{
    return this->brain->getIdeas()[i];
}


