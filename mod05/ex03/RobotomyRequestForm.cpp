/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:32:23 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/28 15:26:29 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45, target)
{
    std::cout << GREEN << "Lobotomy , i mean Robotomy Request Form def consructor called , beep boop" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src)
{
    std::cout << GREEN << "Robotomy Request Form copy constructor called" << RESET << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    AForm::operator=(rhs);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << RED << "" << RESET << std::endl;
}


void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > getExecGrade())
        throw AForm::GradeTooLowException();
    if (!getSigned())
        throw AForm::NotSignedException();
    std::cout << CYAN << "Drilling noises go brrr" << RESET << std::endl;
    if (rand() % 2)
        std::cout << MAGENTA << getTarget() << " has been robotomized successfully :D" << RESET << std::endl;
    else
        std::cout << RED << getTarget() << " has not been robotomized successfully :(" << RESET << std::endl;
}

