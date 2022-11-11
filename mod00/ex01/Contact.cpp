/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:42:46 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/08 16:42:11 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/********** - Getters- **********/

std::string Contact::get_fname() const
{
    return  _Name;  
}
std::string Contact::get_lname() const
{
    return  _LastName;  
}
std::string Contact::get_nname() const
{
    return  _Nickname;  
}
std::string Contact::get_secret() const
{
    return  _Secret;  
}
int Contact::get_num() const
{
    return  _PhoneNum;  
}

/********** - Setters- **********/

void    Contact::set_infos(std::string fname, std::string lname,std::string nname,std::string secret, std::string num)
{
    if(fname.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
        _Name = fname;
    else
        _Name ="John";
    if(lname.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
        _LastName = lname;
    else
        _LastName ="Doe";
    if(nname.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"))
        _Nickname = nname;
    else
        _Nickname ="bingus";
    _Secret = secret;
     if(num.find_first_not_of("0123456789"))
     _PhoneNum = atoi(num.c_str());
}

/********** - Constructor and destructor - **********/

Contact::Contact(void) {}

Contact::~Contact(void) {}

/********** - Display - **********/

void            Contact::display()
{
    std::cout << "First name :" << _Name << std::endl;
    std::cout << "Last name :" << _LastName << std::endl;
    std::cout << "Nickname :" << _Nickname << std::endl;
    std::cout << "Secret :" << _Secret << std::endl;
    std::cout << "Phone number :" << _PhoneNum << std::endl;
}