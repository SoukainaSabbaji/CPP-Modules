/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:54:05 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/31 14:13:20 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Aclass.hpp"
#include "Bclass.hpp"
#include "Cclass.hpp"

Base *generate(void)
{
    int i = rand() % 3;
    if (i == 0)
        return (new Aclass());
    else if (i == 1)
        return (new Bclass());
    else
        return (new Cclass());
}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<Aclass *>(p))
        std::cout << "Aclass" << std::endl;
    else if (dynamic_cast<Bclass *>(p))
        std::cout << "Bclass" << std::endl;
    else if (dynamic_cast<Cclass *>(p))
        std::cout << "Cclass" << std::endl;
}

void identify_from_reference(Base &p)
{
    try
    {
        (void)dynamic_cast<Aclass &>(p);
        std::cout << "Aclass" << std::endl;
    }
    catch (std::exception &e)
    {
    }
    try
    {
        (void)dynamic_cast<Bclass &>(p);
        std::cout << "Bclass" << std::endl;
    }
    catch (std::exception &e)
    {
    }
    try
    {
        (void)dynamic_cast<Cclass &>(p);
        std::cout << "Cclass" << std::endl;
    }
    catch (std::exception &e)
    {
    }
}

int main()
{
    srand(time(NULL));
    Base *base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);
    return (0);
}