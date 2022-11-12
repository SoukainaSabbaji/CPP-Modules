/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:28:11 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/12 17:43:38 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;


    std::cout << "the memory address of the string variable is : " << &string<< std::endl;
    std::cout << "the memory address held by stringPTR is : " << stringPTR << std::endl;
    std::cout << "the memory address held by stringREF is : " << &stringREF << std::endl;
    
    std::cout << "the value of string is : " << string << std::endl;
    std::cout << "the value pointed to by stringPTR is : " << *stringPTR << std::endl;
    std::cout << "the value pointed to by stringREF is : " << stringREF << std::endl;

}