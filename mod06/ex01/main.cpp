/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:30:07 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/30 17:40:41 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


/*******************- serialize functions --*******************/

//it takes a pointer and converts it to the unsigned integer type uintptr_t
uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data *data = new Data("Hello");
    uintptr_t raw = serialize(data);
    Data *data2 = deserialize(raw);
    std::cout << data2->getValue() << std::endl;
    delete data;
    return (0);
}