/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:39:05 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/01/02 17:12:34 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> arr(5);
    for (int i = 0; i < 5; i++)
        arr[i] = i * 2;
    std::cout << arr.size() << std::endl;
    std::cout << "iterating through arr to print it" << std::endl;
    iter(arr, 5, print_red);
}