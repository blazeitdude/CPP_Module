/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:52:48 by ldione            #+#    #+#             */
/*   Updated: 2022/10/25 21:17:28 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name)
{
    this->name = name;
    this->hitpoints = 100;
    this->init_hp = this->hitpoints;
    this->energy = 30;
    this->damage = 30;
}

FragTrap::~FragTrap( void )
{
    std::cout << "Frag trap destructor\n";
}

void    FragTrap::highFiveGuys( void )
{
    std::cout << "Hey, guys, give me five!\n";
}