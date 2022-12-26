/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:38:47 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/26 16:10:17 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
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
      // bureaucrat1.execute(form2);
      // bureaucrat2.execute(form2);
      bureaucrat3.execute(form2);
   }
   catch (std::exception &e)
   {
       std::cerr << MAGENTA << e.what() << RESET << std::endl;
   }
   //testing signing robotomy request
   //creating robotomy request
   AForm *robotomyRequest = new RobotomyRequestForm("Bender");
   std::cout << robotomyRequest->getName() << " has sign grade : " << robotomyRequest->getSignGrade() << std::endl;
   std::cout << robotomyRequest->getName() << " has exec grade : " << robotomyRequest->getExecGrade() << std::endl;
   try
   {
      // bureaucrat1.signForm(*robotomyRequest);
      bureaucrat2.signForm(*robotomyRequest);
      // bureaucrat3.signForm(*robotomyRequest);
   }
   catch (std::exception &e)
   {
       std::cerr << MAGENTA << e.what() << RESET << std::endl;
   }
   //testing executing robotomy request
   try
   {
      // bureaucrat1.execute(*robotomyRequest);
      // bureaucrat2.execute(*robotomyRequest);
      bureaucrat3.execute(*robotomyRequest);
   }
   catch (std::exception &e)
   {
       std::cerr << MAGENTA << e.what() << RESET << std::endl;
   }
   //testing signing presidential pardon
   //creating presidential pardon
   AForm *presidentialPardon = new PresidentialPardonForm("Bender");
   std::cout << presidentialPardon->getName() << " has sign grade : " << presidentialPardon->getSignGrade() << std::endl;
   std::cout << presidentialPardon->getName() << " has exec grade : " << presidentialPardon->getExecGrade() << std::endl;
   try
   {
      // bureaucrat1.signForm(*presidentialPardon);
      // bureaucrat2.signForm(*presidentialPardon);
      bureaucrat3.signForm(*presidentialPardon);
   }
   catch (std::exception &e)
   {
       std::cerr << MAGENTA << e.what() << RESET << std::endl;
   }
   //testing executing presidential pardon
   try
   {
      // bureaucrat1.execute(*presidentialPardon);
      // bureaucrat2.execute(*presidentialPardon);
      bureaucrat3.execute(*presidentialPardon);
   }
   catch (std::exception &e)
   {
       std::cerr << MAGENTA << e.what() << RESET << std::endl;
   }
   //testing signing shrubbery creation
   //creating shrubbery creation
   AForm *shrubberyCreation = new ShrubberyCreationForm("Bender");
   std::cout << shrubberyCreation->getName() << " has sign grade : " << shrubberyCreation->getSignGrade() << std::endl;
   std::cout << shrubberyCreation->getName() << " has exec grade : " << shrubberyCreation->getExecGrade() << std::endl;
   try
   {
      // bureaucrat1.signForm(*shrubberyCreation);
      std::cout << "signing shrub" << std::endl;
      bureaucrat2.signForm(*shrubberyCreation);
      // bureaucrat3.signForm(*shrubberyCreation);
   }
   catch (std::exception &e)
   {
       std::cerr << MAGENTA << e.what() << RESET << std::endl;
   }
   //testing executing shrubbery creation
   try
   {
      // bureaucrat1.execute(*shrubberyCreation);
      // bureaucrat2.execute(*shrubberyCreation);
      std::cout << "executing shrub" << std::endl;
      shrubberyCreation->execute(bureaucrat3);
      // bureaucrat3.execute(*shrubberyCreation);
   }
   catch (std::exception &e)
   {

       std::cerr << MAGENTA << e.what() << RESET << std::endl;
   }
   return (0);
   
}
