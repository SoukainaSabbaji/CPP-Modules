/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:10:26 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/01/03 16:09:31 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

typedef std::vector<int>::iterator iter;
class Span
{
    private:
        unsigned int _n;
        std::vector<int> _v;
    public:
        Span();
        Span(unsigned int n);
        Span(int first, int last, int jump);
        Span(Span const &src);
        ~Span();
        Span &operator=(Span const &rhs);
        unsigned int        getN() const;
        std::vector<int>    getV() const;
        void                addNumber(int n);
        int                 shortestSpan();
        int                 longestSpan();
        void                addNumber(iter begin, iter end);
};

std::ostream &operator<<(std::ostream &o, Span const &rhs);

#endif