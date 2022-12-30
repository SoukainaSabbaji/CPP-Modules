/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cclass.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:52:30 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/30 17:56:08 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CCLASS_HPP
#define CCLASS_HPP

#include <iostream>

#define RED   "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW   "\x1b[33m"
#define BLUE   "\x1b[34m"
#define MAGENTA   "\x1b[35m"
#define CYAN   "\x1b[36m"
#define RESET "\x1b[0m"

#include "Base.hpp"

class Cclass : public Base
{
};

#endif