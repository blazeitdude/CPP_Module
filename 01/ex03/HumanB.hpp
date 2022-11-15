/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:11:42 by ldione            #+#    #+#             */
/*   Updated: 2022/10/10 19:21:45 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string);
    ~HumanB();
    void    setWeapon(Weapon &newWeapon);
    void    attack() const;
private:
    std::string         name;
    Weapon              *weapon;
};

#endif