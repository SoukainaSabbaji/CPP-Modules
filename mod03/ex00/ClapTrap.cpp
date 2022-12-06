/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:33:58 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/06 11:52:40 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

ClapTrap::ClapTrap()
{
    std::cout << "I am the best robot. Yeah, yeah, yeah ";
    std::cout << ", I am the best robot. Ooh, ooh, here we go!" << std::endl;  
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitpoints = 10;
    this->energy_points = 10;
    this->attack_damage = 10;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Well, I think that about wraps it up. Thanks for";
    std::cout << "-- thanks for comin' to my party" << std::endl;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &obj)
{
	if (this == &obj)
		return (*this);
	this->name = obj.name;
    this->hitpoints = obj.hitpoints;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
	return *this;
}

/********** - ClapTrap fight mode - **********/

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->name << " attacks " << target;
    std::cout << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " takes " << amount;
    std::cout << " points of damage!" << std::endl;
    this->hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " is repaired by " << amount;
    std::cout << " points!" << std::endl;
    this->hitpoints += amount;
}