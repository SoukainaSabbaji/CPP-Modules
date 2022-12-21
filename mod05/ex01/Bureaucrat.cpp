/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:06:12 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/20 17:53:43 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/********** - Constructors , copy assignment op and destructor - **********/

Bureaucrat::Bureaucrat()
{
    std::cout << GREEN << "Bureaucrat default constructor called" << RESET << std::endl;   
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << GREEN << "Bureaucrat parametrized constructor called" << RESET << std::endl;   
} 

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    std::cout << GREEN << "Bureaucrat copy constructor called" << RESET << std::endl;
    *this = src ;        
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (&rhs != this)
        this->_grade = rhs._grade;   
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << RED << "Bureaucrat destructor called" << RESET << std::endl; 
}

/********** - getters - **********/

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

/********** - increment/decrememt grade - **********/

void    Bureaucrat::decrementGrade()
{
    std::cout << CYAN << "decrementing " << this->getName() <<"'s Grade" << RESET << std::endl;
    if (_grade == 150)
        throw GradeTooLowException();
    else
        this->_grade++;
}

void    Bureaucrat::incrementGrade()
{
    std::cout << CYAN << "incrementing " << this->getName() <<"'s Grade" << RESET << std::endl;
    if (_grade == 1)
        throw GradeTooHighException();
   this->_grade--;
}

/********** - insertion operator overload - **********/

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << "Bureaucrat " << rhs.getName() << " has a grade " << rhs.getGrade();
	return o;
}

