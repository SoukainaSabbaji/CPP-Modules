/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:22:05 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/15 17:58:46 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/********** - Constructor and destructor - **********/

Harl::Harl(void)
{
    std::cout << "The innocently annoying Harl is born" << std::endl;
}

Harl::~Harl(void)
{
    std::cout << "Harl signing out" << std::endl;
}

/********** - Harl being Harl - **********/

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my " ;
    std::cout << " 7XL-double-cheese-triple-pickle-special" ;
    std::cout << " ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money." ;
    std::cout << " You didn’ t put enough bacon in my burger! " ;
    std::cout << " ! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." ;
    std::cout << " I’ve been coming for years whereas you" ;
    std::cout << "  started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/********** - Harl being Harl - **********/

// void    Harl::complain(std::string level)
// {
    
// }