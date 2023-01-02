/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:21:05 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/01/02 16:23:07 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

template <typename T>
class Array
{
    private:
        T *_arr;
        int _len;

    public:
        Array() : _arr(NULL), _len(0)
        {
        }
        Array(unsigned int n) : _arr(new T(n)), _len(n)
        {
        }
        Array(Array const &src)
        {
            *this = src;
        }
        Array &operator=(Array const &rhs)
        {
            if (this != &rhs)
            {
                if (_arr)
                    delete[] _arr;
                _arr = new T[rhs._len];
                for (int i = 0; i < rhs._len; i++)
                    _arr[i] = rhs._arr[i];
                _len = rhs._len;
            }
            return *this;
        }
        ~Array()
        {
            if (_arr)
                delete[] _arr;
        }
        T &operator[](int i)
        {
            if (i < 0 || i >= _len)
                throw std::exception();
            return _arr[i];
        }
        int size() const
        {
            return _len;
        }
};

//code an iter function template that takes an array and its length and a function pointer and applies that function to each element of the array.

template <typename T>
void iter(Array<T> &arr, int size, void (*f)(T &)) 
{
  for (int i = 0; i < size; i++) 
  {
    f(arr[i]);
  }
}

template <typename T>
void print_red(T &a)
{
    std::cout << RED << a << RESET << std::endl;
}



#endif