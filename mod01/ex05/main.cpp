/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:08:34 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/15 18:04:55 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    debug(void);
void    info(void);
void    error(void);
void    warning(void);

typedef void(*complain)(std::string);

int main()
{
    Harl carbon_copy;
    complain complains[4](void) = {&Harl::debug, &Harl::info , &Harl::error, &Harl::warning};
    
    std::cout << "enter the action you want harl to do"
}