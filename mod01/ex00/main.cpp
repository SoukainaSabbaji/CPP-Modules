/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:28:11 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/12 16:09:29 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name); 

int main()
{
   Zombie *creeper = newZombie("Creeper");
    randomChump("Rottenberg");
   
    creeper->announce();
    
    delete creeper;
}