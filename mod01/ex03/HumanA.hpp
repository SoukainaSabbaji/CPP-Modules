/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 11:22:51 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/13 13:14:08 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon      &_weapon;
        std::string _name;
    public:
        HumanA(std::string name, Weapon  &weapon);
        ~HumanA(void);
        void    attack(void);
        void    setWeapon(Weapon newWeapon);  
};