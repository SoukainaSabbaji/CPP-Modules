/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:53:01 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/27 12:42:43 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal        *gen = new Animal();
    const Animal        *gromit = new Dog();
    const Animal        *garfield = new Cat();
    const WrongAnimal   *gen1 = new WrongAnimal();
    const WrongAnimal   *j1 = new WrongCat();
    std::cout << gromit->getType() << " " << std::endl;
    std::cout << garfield->getType() << " " << std::endl;
    gen1->makeSound();
    j1->makeSound();
    garfield->makeSound();
    gromit->makeSound();
    gen->makeSound();
    std::cout << "------------------" << std::endl;
    const WrongAnimal *j2 = new WrongAnimal();
    std::cout << j2->getType() << " " << std::endl;
    j2->makeSound();
    std::cout << "------------------" << std::endl;
    const WrongAnimal *j3 = new WrongCat();
    std::cout << j3->getType() << " " << std::endl;
    j3->makeSound();
    std::cout << "------------------" << std::endl;
    delete gen;
    delete gromit;
    delete garfield;
    delete gen1;
    delete j1;
    delete j2;
    delete j3;
    return 0;
}