/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:39:48 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/21 14:37:50 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP


#define RED   "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW   "\x1b[33m"
#define BLUE   "\x1b[34m"
#define MAGENTA   "\x1b[35m"
#define CYAN   "\x1b[36m"
#define RESET "\x1b[0m"

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string   _FormName;
        bool                _signed;
        const int           _SignGrade;
        const int           _ExecGrade;
    public:
        Form();
        Form(std::string name, int sign, int exec);
        Form(Form const &src);
        Form &operator=(Form const &rhs);
        ~Form();
        std::string getName() const;
        bool        getSigned() const;
        int         getSignGrade() const;
        int         getExecGrade() const;
        void        beSigned(Bureaucrat const &b);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Error: Grade is too high.";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Error: Grade is too low.";
                }
        };
};
std::ostream &operator<<(std::ostream &o, Form const &r);

#endif 