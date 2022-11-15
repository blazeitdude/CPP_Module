/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:12:32 by ldione            #+#    #+#             */
/*   Updated: 2022/10/10 19:22:07 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon): name(name), weapon(newWeapon)
{   
}

HumanA::~HumanA()
{
    
}

void    HumanA::attack() const
{
    std::cout << this->name <<" attacts with their " << weapon.getType() << std::endl;
}