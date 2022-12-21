/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:31:36 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/21 13:35:36 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

Form::Form() : _FormName("default"), _signed(false), _SignGrade(150), _ExecGrade(150)
{
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Form::Form(std::string name, int sign, int exec) : _FormName(name), _signed(false), _SignGrade(sign), _ExecGrade(exec)
{
    std::cout << GREEN << "Parametrized constructor called" << RESET << std::endl;
    if (sign < 1 || exec < 1)
        throw Form::GradeTooHighException();
    if (sign > 150 || exec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &src) : _FormName(src._FormName), _signed(src._signed), _SignGrade(src._SignGrade), _ExecGrade(src._ExecGrade)
{
    *this = src;
}

Form &Form::operator=(Form const &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return *this;
}

Form::~Form()
{
    std::cout << RED << "Default destructor called" << RESET << std::endl;
}
/********** - Getters and other member funcs - **********/

std::string Form::getName() const
{
    return this->_FormName;
}

bool Form::getSigned() const
{
    return this->_signed;
}

int Form::getSignGrade() const
{
    return this->_SignGrade;
}

int Form::getExecGrade() const
{
    return this->_ExecGrade;
}

void Form::beSigned()
{
    this->_signed = true;
}

