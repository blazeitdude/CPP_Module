/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:23:57 by ldione            #+#    #+#             */
/*   Updated: 2022/10/10 19:09:01 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
}

Weapon::~Weapon()
{   
}

const std::string&    Weapon::getType()
{
    const std::string   &ref = this->type;
    return (ref);
}

bool    Weapon::setType(std::string type)
{
    if (type.empty())
    {
        std::cout << "Oops, you didn't say what type of weapon, sir!\n";
        return (false);
    }
    this->type = type;
    return (true);
}