/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:08:34 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/16 13:24:15 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// void    debug(void);
// void    info(void);
// void    error(void);
// void    warning(void);

// typedef void(*complain)(std::string);



void	Harl::complain(std::string level)
{
	void		(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (lvls[i] == level)
		{
			(this->*ptr_complain[i])();
			break ;
		}
	}
}


int main()
{
    Harl carbon_copy;
    std::string complaint[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;

    while (i++ < 3)
    {
        std::cout << RED << complaint[i] << " : " << DFL;
        carbon_copy.complain(complaint[i]);
    }
    return (0);
}