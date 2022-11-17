/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 11:22:28 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/16 14:37:35 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/********** - Constructor and destructor - **********/

HumanB::HumanB(std::string name): _name(name)
{
    std::cout << this->_name << " is ready for battle" << std::endl;
}

HumanB::~HumanB()
{
}

/********** - Attack function and Setter - **********/

void    HumanB::setWeapon(Weapon &newWeapon)
{
    this->_weapon = &newWeapon;
} 

void    HumanB::attack()
{
    if (this->_weapon)
        std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl ;
}

