/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:39:06 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/17 12:51:05 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

Brain::Brain()
{
    std::cout << GREEN << "Brain constructor called" << RESET << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "no thoughts head empty";
} 

Brain::Brain(Brain const &src)
{
    std::cout << GREEN << "Brain copy constructor called" << RESET << std::endl;
    *this = src;
}

Brain &Brain::operator=(Brain const &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = rhs.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << RED << "Brain destructor called" << RESET << std::endl;
}

/********** - Getters and Setters - **********/

std::string *Brain::getIdeas()
{
	return (this->ideas);
}

void Brain::setIdea(std::string idea, int i)
{
    this->ideas[i] = idea;
}


