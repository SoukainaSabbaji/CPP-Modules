/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:49:29 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/16 14:18:02 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/********** - Constructor and destructor - **********/

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << " is born :D" << std::endl;       
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " sent to the shadow realm" << std::endl;
}

/********** - Announce function- **********/

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
