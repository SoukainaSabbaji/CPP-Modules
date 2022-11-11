/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:57:25 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/07 18:00:08 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    std::string arg;
    int         i;
    char        c;
    size_t      j;
    
    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else 
    {
        while (i < argc)
        {
            arg = argv[i];
            for (j = 0; j < arg.length(); j++)
            {
                c = std::toupper(arg[j]);
                std::cout << c;           
            }
            i++;
        }
        std::cout << "\n";
    }
    return (0);
}