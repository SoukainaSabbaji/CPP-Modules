/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:34:04 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/07 13:30:23 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    //main function to test the ScavTrap class
    ScavTrap s1("s1");
    ScavTrap s2("s2");
    ScavTrap s3(s1);
    s1.attack("s2");
    s2.takeDamage(20);
    s2.beRepaired(10);
    s3.guardGate();
    return 0;
}