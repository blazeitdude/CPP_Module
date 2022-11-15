/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:10:35 by ldione            #+#    #+#             */
/*   Updated: 2022/10/10 19:22:24 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon &newWeapon)
{
    this->weapon = &newWeapon;
}

void    HumanB::attack() const
{
    std::cout << this->name <<" attacts with their " << weapon->getType() << std::endl;
}