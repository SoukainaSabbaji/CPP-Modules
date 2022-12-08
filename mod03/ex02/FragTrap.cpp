/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:09:42 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/07 15:25:36 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name,100,100,30)
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

 FragTrap &FragTrap::operator=(FragTrap const &rhs)
 {
        std::cout << "FragTrap assignation operator called" << std::endl;
        if (this != &rhs)
        {
            this->setName(rhs.getName());
            this->setHitPoints(getHitpoints());
            this->setEnergyPoints(rhs.getEnergyPoints());
            this->setAttackDamage(rhs.getAttackDamage());
        }
        return *this;
 }

/********** - attack and HighFives function - **********/

void    FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << this->getName() << " attacks ";
    std::cout << target << ", causing " << this->getAttackDamage();
    std::cout << " points of damage!" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->getName() << " gives high fives to everyone" << std::endl;
}