/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:34:04 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/08 11:22:25 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    //main function to test the FragTrap class
    FragTrap frag("frag");
    FragTrap frag2(frag);
    frag2 = frag;
    frag.attack("target");
    frag.highFivesGuys();
    return 0;
}