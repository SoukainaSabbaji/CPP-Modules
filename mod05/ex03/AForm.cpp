/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:31:36 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/21 14:38:48 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

AForm::AForm() : _formName("default"), _signed(false), _SignGrade(150), _ExecGrade(150)
{
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

AForm::AForm(std::string name, int sign, int exec) : _formName(name), _signed(false), _SignGrade(sign), _ExecGrade(exec)
{
    std::cout << GREEN << "Parametrized constructor called" << RESET << std::endl;
    if (sign < 1 || exec < 1)
        throw AForm::GradeTooHighException();
    if (sign > 150 || exec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(std::string name, int sign, int exec, std::string target) : _formName(name), _signed(false), _SignGrade(sign), _ExecGrade(exec) , _target(target)
{
    std::cout << GREEN << "Parametrized constructor called" << RESET << std::endl;
    if (sign < 1 || exec < 1)
        throw AForm::GradeTooHighException();
    if (sign > 150 || exec > 150)
        throw AForm::GradeTooLowException();
}


AForm::AForm(AForm const &src) : _formName(src._formName), _signed(src._signed), _SignGrade(src._SignGrade), _ExecGrade(src._ExecGrade)
{
    *this = src;
}

AForm &AForm::operator=(AForm const &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return *this;
}

AForm::~AForm()
{
    std::cout << RED << "Shredded form :c" << RESET << std::endl;
}

/********** - Getters and other member funcs - **********/

std::string AForm::getName() const
{
    return this->_formName;
}

bool AForm::getSigned() const
{
    return this->_signed;
}

int AForm::getSignGrade() const
{
    return this->_SignGrade;
}

int AForm::getExecGrade() const
{
    return this->_ExecGrade;
}

std::string AForm::getTarget() const
{
    return this->_target;
}

void AForm::beSigned(Bureaucrat const &r)
{
    if (r.getGrade() > this->_SignGrade)
        throw AForm::GradeTooLowException();
    else
        this->_signed = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
    if (this->getSigned() == false)
        throw NotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw GradeTooLowException();
}

/********** - insertion operator overload - **********/

std::ostream &operator<<(std::ostream &o, AForm const &r)
{
    o << CYAN << "form name: " << r.getName() << " sign status: " << r.getSigned() << " SignGrade: " << r.getSignGrade() << " ExecGrade: " << r.getExecGrade() << RESET << std::endl;
    return o;
}

