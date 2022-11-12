/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:28:11 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/12 17:10:36 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int n, std::string name);


int main()
{
   Zombie *horde = zombieHorde(3, "pepe");
    int i = 0;
    while(i < 3)
    {
        horde[i].announce();
        i++;
    }
}