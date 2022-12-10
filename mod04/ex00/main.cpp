/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:53:01 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/09 17:28:27 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *meta1 = new WrongAnimal();
    const WrongAnimal *j1 = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    meta1->makeSound();
    j1->makeSound();
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    //more tests
    std::cout << "------------------" << std::endl;
    const WrongAnimal *j2 = new WrongAnimal();
    std::cout << j2->getType() << " " << std::endl;
    j2->makeSound();
    std::cout << "------------------" << std::endl;
    const WrongAnimal *j3 = new WrongCat();
    std::cout << j3->getType() << " " << std::endl;
    j3->makeSound();
    std::cout << "------------------" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete meta1;
    delete j1;
    delete j2;
    delete j3;
    return 0;
}