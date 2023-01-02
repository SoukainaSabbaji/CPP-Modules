/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:31:52 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/01/02 15:37:05 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main()
{
    int tab[] = {0, 1, 2, 3, 4};

    std::cout << "iterating through tab to print it" << std::endl;
    ::iter(tab, 5, print_red);
    return 0;
}
