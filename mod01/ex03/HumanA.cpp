/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 11:22:22 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/13 13:16:03 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/********** - Constructor and destructor - **********/

HumanA::HumanA(std::string name,Weapon &weapon):_weapon(weapon), _name(name)
{
    std::cout << this->_name << " is ready for battle" << std::endl;
}

HumanA::~HumanA()
{
}

/********** - Attack function and setter - **********/

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with his " << \
		this->_weapon.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon newWeapon)
{
    this->_weapon = newWeapon;
}  

