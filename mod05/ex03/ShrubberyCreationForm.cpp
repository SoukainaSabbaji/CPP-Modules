/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 13:37:37 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/28 12:52:05 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{
    std::cout << GREEN << "ShrubberyCreationForm constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src)
{
    std::cout << GREEN << "ShrubberyCreationForm copy constructor called" << RESET << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    AForm::operator=(rhs);
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << RED << "RIP Shrubbery , you were a good tree" << RESET << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    // std::cout << "ShrubberyCreationForm::execute called" << std::endl;
    if (executor.getGrade() > getExecGrade())
        throw AForm::GradeTooLowException();
    if (!getSigned())
        throw AForm::NotSignedException();
    std::ofstream ofs(getName() + "_shrubbery");
    ofs << "             .o00o" << std::endl;
    ofs << "            o000000oo" << std::endl;
    ofs << "           00000000000o" << std::endl;
    ofs << "          00000000000000" << std::endl;
    ofs << "       oooooo  00000000  o88o" << std::endl;
    ofs << "    ooOOOOOOOoo  ```''  888888" << std::endl;
    ofs << "  OOOOOOOOOOOO'.qQQQQq. `8888'" << std::endl;
    ofs << " oOOOOOOOOOO'.QQQQQQQQQQ/.88'" << std::endl;
    ofs << " OOOOOOOOOO'.QQQQQQQQQQ/ /q" << std::endl;
    ofs << "  OOOOOOOOO QQQQQQQQQQ/ /QQ" << std::endl;
    ofs << "    OOOOOOOOO `QQQQQQ/ /QQ'" << std::endl;
    ofs << "      OO:F_P:O `QQQ/  /Q'" << std::endl;
    ofs << "         \\. \\ |  // |" << std::endl;
    ofs << "         d\\ \\|_////" << std::endl;
    ofs << "         qP| \\ _' `|Ob" << std::endl;
    ofs << "            \\  / \\  \\Op" << std::endl;
    ofs << "            |  | O| |" << std::endl;
    ofs << "    _       /\\. \\_/ /\\" << std::endl;
    ofs << "     `---__/|  \\   /\\ \\" << std::endl;
    ofs.close();
}

