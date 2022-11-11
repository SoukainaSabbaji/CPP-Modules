/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:34:16 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/10 16:14:55 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact     _contacts[8];
        int         _index;
        // int         _contacts_count;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    add(void);
        void    search(void);
        void    display_contact();
};






#endif