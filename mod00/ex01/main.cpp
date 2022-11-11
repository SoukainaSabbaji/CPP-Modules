/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:14:42 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/10 15:44:49 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void    exe_cmd(std::string cmd , PhoneBook &pb)
{
    if(cmd == "ADD")
        pb.add();    
    else if(cmd == "SEARCH")
        pb.search();  
    else if(cmd == "EXIT")
    {
        std::cout << "Exiting phonebook , data will be lost forever" << std::endl;
        exit(0);        
    }
    else
    {
         std::cout << "The command you entered is invalid" << std::endl;
    }
}

int main()
{
    PhoneBook pb;
    std::string command;
    
    std::cout << "    -- /*Welcome to PhoneBook /*--   " <<std::endl ;
    std::cout << "Enter the command you want to execute :" <<std::endl ;
   
    while(42)
    {
         std::cout << "ADD | SEARCH | EXIT : \n" ;
        std::getline(std::cin, command);
        if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
        if(std::cin.bad())
            exit(0);
        exe_cmd(command , pb);
    }
    return 0;
}