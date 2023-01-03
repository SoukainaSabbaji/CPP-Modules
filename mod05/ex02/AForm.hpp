/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 13:36:02 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/01/02 20:22:25 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef form_HPP
# define form_HPP


#define RED   "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW   "\x1b[33m"
#define BLUE   "\x1b[34m"
#define MAGENTA   "\x1b[35m"
#define CYAN   "\x1b[36m"
#define RESET "\x1b[0m"

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string   _formName;
        bool                _signed;
        const int           _SignGrade;
        const int           _ExecGrade;
        std::string         _target;
    public:
        AForm();
        AForm(std::string name, int sign, int exec);
        AForm(std::string name, int sign, int exec, std::string target);
        AForm(AForm const &src);
        AForm &operator=(AForm const &rhs);
        ~AForm();
        std::string     getName() const;
        bool            getSigned() const;
        int             getSignGrade() const;
        int             getExecGrade() const;
        std::string     getTarget() const;
        void            beSigned(const Bureaucrat &b);
        virtual void    execute(Bureaucrat const & executor) const;
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
        class NotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Error: Form is not signed.";
                }
        };
};
std::ostream &operator<<(std::ostream &o, AForm const &r);

#endif 
