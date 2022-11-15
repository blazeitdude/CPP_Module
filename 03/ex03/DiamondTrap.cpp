/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:29:21 by ldione            #+#    #+#             */
/*   Updated: 2022/10/25 22:00:00 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name)
{
    ClapTrap::name = name + "_ClapTrap_name";
    this->name = name;
    this->hitpoints = FragTrap::hitpoints;
    this->energy = ScavTrap::energy;
    this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& res) 
{
    *this = res;
    std::cout << "DiamondTrap copy constructor\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& res)
{
    std::cout << res << std::endl;
    std::cout << "operator = called\n";
    return (*this);
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI( void )
{
    std::cout << "ClapTrap name --> " << ClapTrap::name << std::endl;
    std::cout << "DiamondTrap name --> " << this->name << std::endl;
}