/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:38:47 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/20 18:08:15 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bureaucrat("John", 100);

    std::cout << bureaucrat.getName() << " has grade " << bureaucrat.getGrade() << std::endl;

    try
    {
        bureaucrat.incrementGrade();
        std::cout << bureaucrat.getName() << " has grade " << bureaucrat.getGrade() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << MAGENTA << e.what() << RESET << std::endl;
    }

    try
    {
        for (int i = 0; i < 200; i++)
        {
            bureaucrat.decrementGrade();
        }
        std::cout << bureaucrat.getName() << " has grade " << bureaucrat.getGrade() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << MAGENTA << e.what() << RESET << std::endl;
    }

    return 0;
}
