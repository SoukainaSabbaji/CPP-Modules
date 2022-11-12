/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:30:40 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/12 17:52:00 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int n, std::string name)
{
    Zombie  *horde = new Zombie[n];
    int i;
    
    i = 0;
    if (n < 0)
    {
        std::cout << "the number you entered is invalid" << std::endl;
        return (NULL);
    }
    while (i < n)
    {
        horde[i].setName(name);
        i++;
    }
    return (horde);
}