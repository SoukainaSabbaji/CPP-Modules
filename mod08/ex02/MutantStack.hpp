/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:53:12 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/01/03 17:01:15 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <stack>
# include <list>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>()
        {
            std::cout << GREEN << "MutantStack created with a def constructor :D" << RESET << std::endl;
        }
        MutantStack(MutantStack const &src) : std::stack<T>(src)
        {
            std::cout << GREEN << "MutantStack created using a copy constructor :D" << RESET << std::endl;
        }
        ~MutantStack()
        {
            std::cout << RED << "MutantStack destroyed :(" << RESET << std::endl;
        }
        MutantStack &operator=(MutantStack const &rhs) { std::stack<T>::operator=(rhs); return *this; }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return std::stack<T>::c.begin(); }
        iterator end() { return std::stack<T>::c.end(); }
};

#endif