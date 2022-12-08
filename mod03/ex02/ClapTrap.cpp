/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:33:58 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/07 14:13:53 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

ClapTrap::ClapTrap()
{
    this->_name = "vagabond";
    this->_attack_damage = 0;
    this->_hitpoints = 10;
    this->_energy_points = 10;
    std::cout << "I am the best robot. Yeah, yeah, yeah ";
    std::cout << ", I am the best robot. Ooh, ooh, here we go!" << std::endl;  
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(10)
{
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad)
{
    this->_name = name;
    this->_hitpoints = hp;
    this->_energy_points = ep;
    this->_attack_damage = ad;
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
	this->_name = obj._name;
    this->_hitpoints = obj._hitpoints;
    this->_energy_points = obj._energy_points;
    this->_attack_damage = obj._attack_damage;
	return *this;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
}

/********** - getters - **********/

std::string ClapTrap::getName() const
{
    return (this->_name);
}

int ClapTrap::getHitpoints() const
{
    return (this->_hitpoints);
}

int ClapTrap::getEnergyPoints() const
{
    return (this->_energy_points);
}

int ClapTrap::getAttackDamage() const
{
    return (this->_attack_damage);
}
/********** - setters - **********/

void::ClapTrap::setEnergyPoints(int ep)
{
    this->_energy_points = ep;
}

void::ClapTrap::setHitPoints(int hp)
{
    this->_hitpoints = hp;
}

void::ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void::ClapTrap::setAttackDamage(int ad)
{
    this->_attack_damage = ad;
}

/********** - ClapTrap fight mode - **********/

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target;
    std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount;
    std::cout << " points of damage!" << std::endl;
    this->_hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " is repaired by " << amount;
    std::cout << " points!" << std::endl;
    this->_hitpoints += amount;
}