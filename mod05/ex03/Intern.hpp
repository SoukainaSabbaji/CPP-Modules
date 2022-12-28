/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:13:20 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/28 13:33:56 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include <string>
# include <exception>
# include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    private:
        Intern();
    public:
        Intern(Intern const &src);
        Intern &operator=(Intern const &rhs);
        ~Intern();
        AForm *makeForm(std::string form, std::string target);
        class FormDoesNotExistException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};


#endif