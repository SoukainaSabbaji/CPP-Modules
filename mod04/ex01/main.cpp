/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:53:01 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/27 12:41:14 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"



int main()
{
    const Animal* gen = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal *arr[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
    }
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    gen->makeSound();
    Dog *d = new Dog();
    Cat *c = new Cat();
    std::cout << c->getBrainIdea(0) << std::endl;
    std::cout << d->getBrainIdea(0) << std::endl;
    delete j;
    delete i;
    delete gen;
    for (int i = 0; i < 10; i++)
    {
        delete arr[i];
    }
    return 0;
}