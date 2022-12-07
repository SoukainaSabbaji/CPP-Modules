/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:34:01 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/12/07 14:15:26 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
class ClapTrap
{
    private:
        std::string _name;
        int _hitpoints;
        int _energy_points;
        int _attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, int hp, int ep, int ad);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap();
        std::string getName() const;
        int         getHitpoints() const;
        int         getEnergyPoints() const;
        int         getAttackDamage() const;
        void        setName(std::string name);
        void        setHitPoints(int hp);
        void        setEnergyPoints(int ep);
        void        setAttackDamage(int ad);
        void        attack(std::string const &target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        ClapTrap    &operator=(ClapTrap const &rhs);
};


#endif