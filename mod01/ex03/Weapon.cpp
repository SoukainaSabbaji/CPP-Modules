/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:14:21 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/16 14:34:56 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/********** - Constructor and destructor - **********/

Weapon::Weapon(std::string weaponName): _type(weaponName)
{
}

Weapon::~Weapon()
{    
}

/********** - Getter and Setter - **********/

const std::string &Weapon::getType(void)
{
    
        return (this->_type);
}

void    Weapon::setType(std::string newType)
{
    this->_type = newType;
}
