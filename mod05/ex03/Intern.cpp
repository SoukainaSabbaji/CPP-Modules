/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:13:25 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/28 14:08:30 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <map>

Intern::Intern()
{
    std::cout << GREEN << "new bureaucracy slave brought to life" << RESET << std::endl;
}

Intern::Intern(Intern const &src)
{
    std::cout << GREEN << "Intern copy constructor called" << RESET << std::endl;
    *this = src;
}

Intern &Intern::operator=(Intern const &rhs)
{
    (void)rhs;
    return *this;
}

Intern::~Intern()
{
    std::cout << RED << "Dobby is a free Elf" << RESET << std::endl;
}

static AForm	*new_robo(std::string target)
{
	AForm	*robo = new RobotomyRequestForm(target);
	return (robo);
}

static AForm	*new_pardon(std::string target)
{
	AForm	*pardon = new PresidentialPardonForm(target);
	return (pardon);
}

static AForm	*new_shrub(std::string target)
{
	AForm	*shrub = new ShrubberyCreationForm(target);
	return (shrub);
}

AForm *Intern::makeForm(std::string form_name, std::string form_target)
{
	AForm	*(*fct[3])(std::string target) = { new_robo, new_pardon, new_shrub};
	std::string	msg[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm	*ret = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (form_name == msg[i])
			ret = fct[i](form_target);
	}
	if (ret)
		std::cout << "Intern creates " << *ret << std::endl;
	else
		throw (Intern::FormDoesNotExistException());
	return (ret);
}


const char *Intern::FormDoesNotExistException::what() const throw()
{
    return "Form does not exist";
}
