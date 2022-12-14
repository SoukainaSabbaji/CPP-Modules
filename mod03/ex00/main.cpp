/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:34:04 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/08 17:09:21 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("B");
    ClapTrap c("C", 100, 100, 100);
    ClapTrap d(c);
    ClapTrap e;
    e = d;
    a.attack("B");
    b.takeDamage(10);
    b.beRepaired(10);
    c.attack("D");
    d.takeDamage(10);
    d.beRepaired(10);
    e.attack("A");
    a.takeDamage(10);
    a.beRepaired(10);
    return (0);
    
}