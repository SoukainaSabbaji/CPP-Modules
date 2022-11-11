/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:06 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/11 13:25:01 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/********** - Constructor and destructor - **********/

PhoneBook::PhoneBook(void)
{
    this->_index = 0;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Closing phonebook" << std::endl ;
}

/********** - Add and search - **********/

void    PhoneBook::add(void)
{
    std::string fname, lname, nname, secret, num;
    while(!std::cin.eof() && num.empty())
    {
        if(std::cin.bad())
            exit(0);
        std::cout << "Enter contact infos starting with the first name" << std::endl ;
        std::cin >> fname;
        std::cout << "Enter " << fname << "'s last name" << std::endl ;
        std::cin >> lname;
        std::cout << "Enter " << fname << "'s nickname" << std::endl ;
        std::cin >> nname;
        std::cout << "Enter " << fname << "'s darkest secret" << std::endl ;
        std::cin >> secret;
        std::cout << "Enter " << fname << "'s phone number" << std::endl ;
        std::cin >> num;
        this->_contacts[this->_index ].set_infos(fname, lname, nname, secret, num);
    }
    std::cout << "Contact added to PhoneBook" << std::endl;
    this->_index++;
    if (_index == 8)
        this->_index = 0;
}

void    PhoneBook::display_contact()
{
    std::string index;
    int         nindex;
    
    std::cout << "\n\nEnter the index of the entry to display" << std::endl;
    std::cin >> index;
    if (index.length() > 1 || !index.find_first_not_of("0123456789"))
    {
        std::cout << "the index you emtered is invalid" << std::endl;
        return ;
    }
    else
    {
        nindex = std::atoi(index.c_str());
        if (nindex >= 0 && nindex < 8)
            this->_contacts[nindex].display();
        else 
        {
            std::cout << "the index you emtered is invalid" << std::endl;
            return ;
        }    
    }
}

std::string create_str(std::string str)
{
    if(str.length() > 10)
            str = str.substr(0,8) + ".";
    return (str);
}

void    PhoneBook::search(void)
{
    std::string str;
    int         i;

    i = 0;
    if(!this->_contacts[0].get_fname().size())
    {
        std::cout << "PhoneBook is Empty!" << std::endl;
        return;
    }
    std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    while (i < 8 && this->_contacts[i].get_fname().size())
    {
        std::cout << "|" << std::setw(10) << i << "|";
        str = this->_contacts[i].get_fname();
        std::cout << std::setw(10) << create_str(str) << "|";
        str = this->_contacts[i].get_lname();
        std::cout << std::setw(10)<< create_str(str) << "|";
        str = this->_contacts[i].get_nname();
        std::cout << std::setw(10) << create_str(str) << "|" << std::endl;
        i++;
    }
    std::cout << " ___________________________________________ " << std::endl;
    display_contact();
}
