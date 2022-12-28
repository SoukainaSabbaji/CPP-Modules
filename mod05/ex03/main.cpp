/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:38:47 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/28 14:49:39 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
   Intern intern;
   Bureaucrat bureaucrat1("John", 15);
   AForm *form = intern.makeForm("robotomy request", "Bender");
   std::cout << form->getName() << " has sign grade : " << form->getSignGrade() << std::endl;
   std::cout << form->getName() << " has exec grade : " << form->getExecGrade() << std::endl;
   try
   {
      bureaucrat1.signForm(*form);
      bureaucrat1.executeForm(*form);
   }
   catch (std::exception &e)
   {
       std::cerr << MAGENTA << e.what() << RESET << std::endl;
   }
   try
   {
      AForm *form3 = intern.makeForm("unknown form", "Bender");
      (void)form3;
   }
   catch (std::exception &e)
   {
       std::cerr << MAGENTA << e.what() << RESET << std::endl;
   }
   return (0);
   
   
  
}
