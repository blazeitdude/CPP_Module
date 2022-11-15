/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:07:19 by ldione            #+#    #+#             */
/*   Updated: 2022/10/10 19:11:20 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
    void    attack() const;
    HumanA(std::string name, Weapon &newWeapon);
    ~HumanA();
    
private:
    std::string   name;
    Weapon              &weapon;
};

#endif