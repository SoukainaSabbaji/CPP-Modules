/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:38:47 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/24 18:40:02 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
   //testing signing forms
   Bureaucrat bureaucrat1("John", 150);
   Bureaucrat bureaucrat2("Doe", 100);
   Bureaucrat bureaucrat3("Jane", 50);
   AForm form("Form1", 100, 100);
   std::cout << bureaucrat1.getName() << " has grade : " << bureaucrat1.getGrade() << std::endl;
   std::cout << bureaucrat2.getName() << " has grade : " << bureaucrat2.getGrade() << std::endl;
   std::cout << bureaucrat3.getName() << " has grade : " << bureaucrat3.getGrade() << std::endl;
   std::cout << form.getName() << " has sign grade : " << form.getSignGrade() << std::endl;
   std::cout << form.getName() << " has exec grade : " << form.getExecGrade() << std::endl;
   try
   {
      // bureaucrat1.signForm(form);
      // bureaucrat2.signForm(form);
      bureaucrat3.signForm(form);
   }
   catch (std::exception &e)
   {
       std::cerr << MAGENTA << e.what() << RESET << std::endl;
   }
   //testing executing forms
   AForm form2("Form2", 50, 50);
   std::cout << form2.getName() << " has sign grade : " << form2.getSignGrade() << std::endl;
   std::cout << form2.getName() << " has exec grade : " << form2.getExecGrade() << std::endl;
   try
   {
      // bureaucrat1.executeForm(form2);
      // bureaucrat2.executeForm(form2);
      bureaucrat3.executeForm(form2);
   }
   catch (std::exception &e)
   {
       std::cerr << MAGENTA << e.what() << RESET << std::endl;
   }
}
