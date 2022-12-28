/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:17:35 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/24 18:35:38 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5, target)
{
    std::cout << GREEN << "PresidentialPardonForm constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src)
{
    std::cout << GREEN << "PresidentialPardonForm copy constructor called" << RESET << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    AForm::operator=(rhs);
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << RED << "PresidentialPardonForm shredded " << RESET << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getSigned() == false)
        throw NotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw GradeTooLowException();
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}