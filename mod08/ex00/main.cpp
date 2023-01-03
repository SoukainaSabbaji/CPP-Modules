/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:51:42 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/01/03 14:04:07 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    try
    {
        std::vector<int>::iterator it = easyfind(v, 5);
        std::cout << YELLOW << "trying to find 5" << RESET << std::endl;
        std::cout << GREEN << "Found: " << *it << RESET << std::endl;
        std::cout << YELLOW << "trying to find 11" << RESET << std::endl;
        it = easyfind(v, 11);
        std::cout << GREEN << "Found: " << *it << RESET << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << RED << "Not found" << RESET << std::endl;
    }
    return (0);
}