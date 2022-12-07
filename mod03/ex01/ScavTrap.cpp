/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:50:03 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/07 12:52:37 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
/********** - Constructors , copy assignment op and destructor - **********/

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name,100,100,30)
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

 ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
 {
        std::cout << "ScavTrap assignation operator called" << std::endl;
        if (this != &rhs)
        {
            this->setName(rhs.getName());
            this->setHitPoints(getHitpoints());
            this->setEnergyPoints(rhs.getEnergyPoints());
            this->setAttackDamage(rhs.getAttackDamage());
        }
        return *this;
 }

//overriding the attack function for scavtrap

void    ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this->getName() << " attacks ";
    std::cout << target << ", causing " << this->getAttackDamage();
    std::cout << " points of damage!" << std::endl;
}

/********** - GuardGate function - **********/

void    ScavTrap::guardGate()
{
    std::cout << "I'm SC4V-TP the Tritton Flats gatekeeper !" <<std::endl;
}

