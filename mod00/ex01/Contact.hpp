/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:42:49 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/19 17:54:48 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>

class Contact
{
    private:
        std::string _Name;
        std::string _LastName;
        std::string _Nickname;
        std::string _Secret;
        std::string _PhoneNum;
    public:
        Contact();
        ~Contact();
        void            set_infos(std::string fname, std::string lname,std::string nname,std::string secret, std::string num);
        std::string     get_fname() const;
        std::string     get_lname() const;
        std::string     get_nname() const;
        std::string     get_secret() const;
        std::string     get_num() const;
        void            print_contact(Contact contact);
        void            display(void);
};
#endif