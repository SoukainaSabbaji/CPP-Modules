/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:16:04 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/01/03 15:08:14 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0)
{
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Span::Span(unsigned int n) : _n(n)
{
    std::cout << GREEN << "Parametrized constructor called" << RESET << std::endl;
}

Span::Span(int first, int last, int jump)
{
    for (int i = first; i <= last; i += jump)
        _v.push_back(i);
}

Span::Span(Span const &src)
{
    *this = src;
}

Span::~Span()
{
    std::cout << RED << "Span destructor called" << RESET << std::endl;
}

Span &Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        _n = rhs._n;
        _v = rhs._v;
    }
    return (*this);
}

void Span::addNumber(int n)
{
    if (_v.size() < _n)
        _v.push_back(n);
    else
        throw std::exception();
}

int Span::shortestSpan()
{
    if (_v.size() < 2)
        throw std::exception();
    std::vector<int> v = _v;
    std::sort(v.begin(), v.end());
    int min = v[1] - v[0];
    for (int i = 1; i < (int)v.size() - 1; i++)
    {
        if (v[i + 1] - v[i] < min)
            min = v[i + 1] - v[i];
    }
    return (min);
}

int Span::longestSpan()
{
    if (_v.size() < 2)
        throw std::exception();
    std::vector<int> v = _v;
    std::sort(v.begin(), v.end());
    return (v[v.size() - 1] - v[0]);
}

void    Span::addNumber(iter begin, iter end)
{
    if (_v.size() + (end - begin) > _n)
        throw std::exception();
    for (iter it = begin; it != end; it++)
        _v.push_back(*it);
}

std::vector<int> Span::getV() const
{
    return (_v);
}

unsigned int Span::getN() const
{
    return (_n);
}

std::ostream &operator<<(std::ostream &o, Span const &rhs)
{
    o << "Span: " << rhs.getN() << std::endl;
    std::vector<int> v = rhs.getV();
    for (int i = 0; i < (int)v.size(); i++)
        o << v[i] << " ";
    o << std::endl;
    return (o);
}