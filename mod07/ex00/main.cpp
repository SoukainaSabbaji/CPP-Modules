/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:21:05 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/01/04 14:44:00 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main()
{
    int a = 2;
    int b = 3;

    std::cout << GREEN << "values before swap : "<< "a = " << a << ", b = " << b << RESET << std::endl;
    ::swap(a, b);
    std::cout << GREEN << "values after swap : "<< "a = " << a << ", b = " << b << RESET << std::endl;
    std::cout << MAGENTA << "min( a, b ) = " << ::min( a, b ) << RESET << std::endl;
    std::cout << BLUE << "max( a, b ) = " << ::max( a, b ) << RESET << std::endl;
    std::string c = "Selamat";
    std::string d = "pagi";

    std::cout << GREEN << "values before swap : "<< "c = " << c << ", d = " << d << RESET << std::endl;
    ::swap(c, d);
    std::cout << GREEN << "values after swap : "<< "c = " << c << ", d = " << d << RESET << std::endl;
    std::cout << MAGENTA << "min( c, d ) = " << ::min( c, d ) << RESET << std::endl;
    std::cout << BLUE << "max( c, d ) = " << ::max( c, d ) << RESET << std::endl;
    return 0;
}

// int main(void)
// {
//     int a = 2;
//     int b = 3;
//     ::swap(a, b);
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
//     std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
//     std::string c = "chaine1";
//     std::string d = "chaine2";
//     ::swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
//     std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
//     return 0;
// }