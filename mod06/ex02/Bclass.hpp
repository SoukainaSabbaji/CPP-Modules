/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bclass.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:50:02 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/30 17:55:21 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BCLASS_HPP
#define BCLASS_HPP

#include <iostream>
#include "Base.hpp"

#define RED   "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW   "\x1b[33m"
#define BLUE   "\x1b[34m"
#define MAGENTA   "\x1b[35m"
#define CYAN   "\x1b[36m"
#define RESET "\x1b[0m"

class Bclass : public Base
{
};

#endif