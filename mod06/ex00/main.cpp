/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:23:08 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/29 16:18:23 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << RED <<  "wrong ! usage : ./convert <literal> " << RESET << std::endl;
        return (1);
    }
}