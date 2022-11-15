/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:50:31 by ldione            #+#    #+#             */
/*   Updated: 2022/10/10 16:37:03 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "null";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "\033[0;31m" << this->name << ':' << " pomer :(\033[0m\n";
}

void    Zombie::announce(void)
{
    std::cout << this->name << ':' << " BraiiiiiiinnnzzzZ...\n";
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName(void)
{
    return (this->name);
}
