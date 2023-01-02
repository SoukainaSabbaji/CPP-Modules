/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:30:59 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/01/02 15:38:50 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

#define RED   "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW   "\x1b[33m"
#define BLUE   "\x1b[34m"
#define MAGENTA   "\x1b[35m"
#define CYAN   "\x1b[36m"
#define RESET "\x1b[0m"

//iter function t
template <typename T>
void iter(T *arr, int len, void (*f)(T &))
{
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

//function that will be called on every element of the array
template <typename T>
void print_red(T &a)
{
    std::cout << RED << a << RESET << std::endl;
}

#endif