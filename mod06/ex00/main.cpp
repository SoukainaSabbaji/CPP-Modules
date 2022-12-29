/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:23:08 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/29 15:41:25 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include <cstring>
#include <cmath>


#define RED   "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW   "\x1b[33m"
#define BLUE   "\x1b[34m"
#define MAGENTA   "\x1b[35m"
#define CYAN   "\x1b[36m"
#define RESET "\x1b[0m"

int isDouble(char *literal)
{
    
}

int isFloat(char *literal)
{
    if (literal.find)
    
}

int isInt(char *literal)
{
    
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << RED <<  "wrong ! usage : ./convert <literal> " << RESET << std::endl;
        return (1);
    }
    std::string literal = argv[1];
    std::cout << argv[1];

    //check if the literal is a character 
    if (literal.length() == 1)
    {
        if (literal[0] >= 0 && literal[0] <= 127)
        {
            char c = literal[0];
            std::cout << "char :" << c << std::endl;
            std::cout << "int :" << static_cast<int>(c) << std::endl;
            std::cout << "float :" << static_cast<float>(c) << std::endl;
            std::cout << "double :" << static_cast<double>(c) << std::endl;
        }
        else 
        {
            int l = std::atoi(literal[0]);
            std::cout << "int :" << l << std::endl;
            std::cout << "char :" << static_cast<char>(l) << std::endl;
            std::cout << "float :" << static_cast<float>(l) << std::endl;
            std::cout << "double :" << static_cast<double>(l) << std::endl;
            
        }
    }
}